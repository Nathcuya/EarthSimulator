#include <iostream>

using namespace std;

void MenuShow()
{
    cout << "----------------------------" << endl;
    cout << "-----   1.添加联系人   -----" << endl;
    cout << "-----   2.显示联系人   -----" << endl;
    cout << "-----   3.删除联系人   -----" << endl;
    cout << "-----   4.更改联系人   -----" << endl;
    cout << "-----   5.清空联系人   -----" << endl;
    cout << "-----   6.查找联系人   -----" << endl;
    cout << "-----   0.退出通讯录   -----" << endl;
    cout << "----------------------------" << endl;
}

int main()
{
    int seclect = 0;

    MenuShow();
    cout << "请输入功能号:" << endl;
    cin >> seclect;

    switch (seclect)
    {
    case 1:

        break;
    case 2:
        break;
case 3:
        break;
        case 4:
        break;
        case 5:
        break;
        
    default:
        break;
    }

    return 0;
}