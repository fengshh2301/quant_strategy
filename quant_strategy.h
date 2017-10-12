/*************************************************************************
* File Name  : quant_strategy.h
* Description:
* Author     : Jason Feng
* Email      : fengshh2301@sina.com
* Time       : 10/12/2017 10:29:00
 ************************************************************************/

#ifndef _QUANT_STRATEGY_H_

#define _QUANT_STRATEGY_H_


#include "base_strategy.h"

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifdef LIB_STRATEGY_EXPORT
#define STRATEGY_EXPORT __declspec(dllexport)
#else
#define STRATEGY_EXPORT __declspec(dllimport)
#endif

class STRATEGY_EXPORT CStrategyRecv :public CStrategyBaseRecv
{
public:
	static CStrategyBaseRecv *createStrategy();
	const char *getStrategyName();

protected:
	CStrategyRecv();
	~CStrategyRecv() {};

public:
	void registerSend(CStrategyBaseSend*);

private:
	static const char mstrategy_name[32];

	CStrategyBaseSend* mpsend;
};


#endif /* end of include guard: _QUANT_STRATEGY_H_ */


