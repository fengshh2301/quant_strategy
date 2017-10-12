/*************************************************************************
* File Name  : quant_strategy.h
* Description:
* Author     : Jason Feng
* Email      : fengshh2301@sina.com
* Time       : 10/12/2017 10:29:00
 ************************************************************************/
#ifndef _QUANT_STRATEGY_H_
#define _QUANT_STRATEGY_H_

#include "strategy.h"

class STRATEGY_EXPORT CStrategyRecv :public CStrategyBaseRecv
{
public:
	static CStrategyBaseRecv *createStrategy();

protected:
	CStrategyRecv();
	~CStrategyRecv() {};

public:
	virtual const char *getStrategyName();
	virtual void registerSend(CStrategyBaseSend*);

	virtual void onRtnOrder();
	virtual void onRtnTrade();
	virtual void onRtnTick();

	virtual void onRspOrder();
	virtual void onRspTrade();
	virtual void onRspTick();

private:
	CStrategyBaseSend* mpsend;
};

#endif /* end of include guard: _QUANT_STRATEGY_H_ */
