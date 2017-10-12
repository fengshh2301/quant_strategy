#include "stdafx.h"
#include "quant_strategy.h"

const char CStrategyRecv::mstrategy_name[32] = "test";

CStrategyBaseRecv * CStrategyRecv::createStrategy()
{
	CStrategyBaseRecv* pstrategy = new CStrategyRecv();
	if (pstrategy) return pstrategy;
	return nullptr;
}

const char * CStrategyRecv::getStrategyName()
{
	return mstrategy_name;
}

CStrategyRecv::CStrategyRecv()
{
}

void CStrategyRecv::registerSend(CStrategyBaseSend * psend)
{
	mpsend = psend;
}
