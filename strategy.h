/*************************************************************************
* File Name  : strategy.h
* Description: 磐迅技术量化平台策略接口
* Author     : Jason Feng
* Email      : fengshh2301@sina.com
* Time       : 10/11/2017 19:40:46
 ************************************************************************/
#ifndef _STRATEGY_H_
#define _STRATEGY_H_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#if defined(WIN32)
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

	virtual void cancelOrder() = 0;

	virtual void getInvestorData() = 0;
};

class STRATEGY_EXPORT CStrategyBaseRecv
{
public:
	static CStrategyBaseRecv *createStrategy();

	virtual const char *getStrategyName() = 0;

	virtual void registerSend(CStrategyBaseSend*) = 0;

	virtual void onRtnOrder() = 0;
	virtual void onRtnTrade() = 0;
	virtual void onRtnTick() = 0;

	virtual void onRspOrder() {};
	virtual void onRspTrade() {};
	virtual void onRspTick() {};
protected:
	~CStrategyBaseRecv() {};
};

#endif /* end of include guard: _STRATEGY_H_ */

