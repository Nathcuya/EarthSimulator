#include <iostream>

using namespace std;


void MenuShow()
{
    cout << "-----1.添加联系人-----" << endl;
    cout << "-----2.显示联系人-----" << endl;
    cout << "-----3.删除联系人-----" << endl;
    cout << "-----4.更改联系人-----" << endl;
    cout << "-----5.清空联系人-----" << endl;
    cout << "-----6.查找联系人-----" << endl;
    cout << "-----0.退出通讯录-----" << endl;

}

int main()
{


    MenuShow();
    return 0;
}