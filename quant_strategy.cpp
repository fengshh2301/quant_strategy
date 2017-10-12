#include "stdafx.h"
#include "quant_strategy.h"

static const char gstrategy_name[32] = "test";

CStrategyBaseRecv * CStrategyRecv::createStrategy()
{
	CStrategyBaseRecv* pstrategy = new CStrategyRecv();
	if (pstrategy) return pstrategy;
	return nullptr;
}

CStrategyRecv::CStrategyRecv()
{
}

const char * CStrategyRecv::getStrategyName()
{
	return gstrategy_name;
}

void CStrategyRecv::registerSend(CStrategyBaseSend * psend)
{
	mpsend = psend;
}

void CStrategyRecv::onRtnOrder()
{
}

void CStrategyRecv::onRtnTrade()
{
}

void CStrategyRecv::onRtnTick()
{
	std::cout << "onRtnTick" << std::endl;

	mpsend->insertOrder();
}

void CStrategyRecv::onRspOrder()
{
}

void CStrategyRecv::onRspTrade()
{
}

void CStrategyRecv::onRspTick()
{
}
