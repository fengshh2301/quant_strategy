// test_strategy.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "base_strategy.h"
#include "strategy_send.h"

typedef class CStrategyBaseRecv* CREATE_STRATEGY();

int main()
{
	std::cout << "hello" << std::endl;

	HINSTANCE hdll = LoadLibraryA("quant_strategy.dll");
	CREATE_STRATEGY* create_recv = (CREATE_STRATEGY*)GetProcAddress(hdll
		, "?createStrategy@CStrategyRecv@@SAPAVCStrategyBaseRecv@@XZ");
	CStrategyBaseRecv* precv = create_recv();
	precv->getStrategyName();
	std::cout << precv->getStrategyName() << std::endl;

	CStrategyBaseSend* psend = new CStrategySend;
	precv->registerSend(psend);


	system("pause");
    return 0;
}

