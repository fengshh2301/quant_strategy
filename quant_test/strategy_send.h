#pragma once
#include "strategy.h"
class CStrategySend :
	public CStrategyBaseSend
{
public:
	CStrategySend();
	~CStrategySend();

	virtual void insertOrder();

	virtual void cancelOrder();

	virtual void getInvestorData();
};

