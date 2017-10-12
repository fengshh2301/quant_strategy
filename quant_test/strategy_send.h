#pragma once
#include "base_strategy.h"
class CStrategySend :
	public CStrategyBaseSend
{
public:
	CStrategySend();
	~CStrategySend();

	virtual void insertOrder();
};

