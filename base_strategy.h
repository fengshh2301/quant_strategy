/*************************************************************************
* File Name  : base_strategy.h
* Description:
* Author     : Jason Feng
* Email      : fengshh2301@sina.com
* Time       : 10/11/2017 19:40:46
 ************************************************************************/

#ifndef _BASE_STRATEGY_H_

#define _BASE_STRATEGY_H_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

//#include "ThostFtdcUserApiStruct.h"

#if defined(ISLIB) && defined(_WIN32)
#ifdef LIB_STRATEGY_EXPORT
#define STRATEGY_EXPORT __declspec(dllexport)
#else
#define STRATEGY_EXPORT __declspec(dllimport)
#endif
#else
#define STRATEGY_EXPORT
#endif

class CStrategyBaseSend
{
public:
	virtual void insertOrder() = 0;
};

class STRATEGY_EXPORT CStrategyBaseRecv
{
public:
	static CStrategyBaseRecv *createStrategy();

	virtual const char *getStrategyName() = 0;

	virtual void registerSend(CStrategyBaseSend*) = 0;
protected:
	~CStrategyBaseRecv() {};
};


#endif /* end of include guard: _BASE_STRATEGY_H_ */

