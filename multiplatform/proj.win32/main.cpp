#include "main.h"
#include "AppDelegate.h"
#include "cocos2d.h"

USING_NS_CC;

int APIENTRY _tWinMain(HINSTANCE hInstance,
                       HINSTANCE hPrevInstance,
                       LPTSTR    lpCmdLine,
                       int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // create the application instance
	AppDelegate app;
	//AppDelegate app2;//���õڶ��λᷢ������
    return Application::getInstance()->run();//AppDelegate app���Ѿ�������Application��ʵ�������Կ���ֱ�ӵ���
}
