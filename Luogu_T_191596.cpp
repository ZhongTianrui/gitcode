#include<stdio.h>
#include<windows.h>//头文件
int main()
{
    while(1)
    {
        if(GetAsyncKeyState(VK_SPACE))//按下空格，开始执行
        {
            while(1)
            {
                mouse_event(MOUSEEVENTF_LEFTDOWN|MOUSEEVENTF_LEFTUP,0,0,0,0);//当前位置点击一次鼠标
//                Sleep(0.1);//每0.5秒点击一次
                if(GetAsyncKeyState(VK_ESCAPE))return 0; //按esc退出
            }
        }
    }
    return 0;
}
