#include "stdafx.h"
#include "quant_strategy.h"

static const char gstrategy_name[32] = "test";

CStrategyBaseRecv * CStrategyRecv::createStrategy()
{
	CStrategyBaseRecv* pstrategy = new CStrategyRecv();
	if (pstrategy) return pstrategy;
	return nullptr;
}

const char * CStrategyRecv::getStrategyName()
{
	return gstrategy_name;
}

CStrategyRecv::CStrategyRecv()
{
}

void CStrategyRecv::registerSend(CStrategyBaseSend * psend)
{
	mpsend = psend;
}
