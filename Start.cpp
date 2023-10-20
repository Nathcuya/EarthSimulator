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
    int select = 0;

    MenuShow();
    // cout << "请输入功能号:" << endl;
    cin >> select;

    switch (select)
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
    case 6:
        break;
    case 0:
        cout << "按任意键退出通讯录系统,欢迎下次使用!" << endl;
        system("pause");
        return 0;

    default:
        break;
    }

    return 0;
}