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
	//AppDelegate app2;//调用第二次会发生断言，在Application的构造函数中，只允许调用一次其构造函数

	auto tmp = typeid(*Application::getInstance()).name();
    return Application::getInstance()->run();//AppDelegate app中已经生成了Application的实例，所以可以直接调用
}
