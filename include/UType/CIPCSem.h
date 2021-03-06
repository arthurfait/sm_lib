/*
 * CIPCSem.h
 *
 * Copyright © 2016 Sergey Cherepanov (sergey0311@gmail.com)
 *
 *  Created on: 06.03.2016
 *      Author: Sergey Cherepanov (https://github.com/CrazyLauren)
 *
 * Distributed under MPL 2.0 (See accompanying file LICENSE.txt or copy at
 * https://www.mozilla.org/en-US/MPL/2.0)
 */ 
#ifndef CIPCSEM_H_
#define CIPCSEM_H_

#ifndef _WIN32
#	include <semaphore.h>
#endif

namespace NSHARE
{

class SHARE_EXPORT CIPCSem:CDenyCopying
{
public:
	enum{
# ifdef _WIN32
	eReguredBufSize=16
#else
	eReguredBufSize=sizeof(sem_t)+2*4+__alignof(sem_t)
#endif	
	};
	enum eOpenType
	{
		E_UNDEF,
		E_HAS_TO_BE_NEW,
		E_HAS_EXIST
	};
	static int const MAX_VALUE;
	
	CIPCSem();
	CIPCSem(uint8_t* aBuf, size_t aSize,unsigned int value,eOpenType const =E_UNDEF,int aInitvalue=-1);
	~CIPCSem();
	
	bool MInit(uint8_t* aBuf, size_t aSize,unsigned int value,eOpenType  =E_UNDEF,int aInitvalue=-1);
	
	void MFree();
	bool MIsInited()const;
	bool MWait(void);
	bool MWait(double const);
	bool MTryWait(void);
	bool MPost(void);
	int MValue() const;
	NSHARE::CText const& MName()const;
	void MUnlink();
	eOpenType MGetType() const;//if E_HAS_TO_BE_NEW - The mutex has been created, if E_HAS_EXIST- It was exit, else It's not inited
	
	static size_t sMRequredBufSize();
private:
	struct CImpl;
	CImpl *FImpl;
	eOpenType FType;
};
inline CIPCSem::eOpenType CIPCSem::MGetType() const
{
	return FType;
}
template<> class SHARE_EXPORT CRAII<CIPCSem> : public CDenyCopying
{
public:
	explicit CRAII(CIPCSem & aSem) :
			FSem(aSem)
	{
		MLock();
	}
	~CRAII()
	{
		MUnlock();
	}
	inline void MUnlock()
	{
		if (FIsLock)
			FSem.MPost();
		FIsLock = false;
	}
private:
	inline void MLock()
	{
		FSem.MWait();
		FIsLock =true;
	}
	CIPCSem &FSem;
	volatile bool FIsLock;
};
} /* namespace NSHARE */
#endif /* CIPCSEM_H_ */
