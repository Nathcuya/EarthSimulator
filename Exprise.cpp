#include <iostream>

using namespace std;

// int main()
// {
//     std::cout << "Hello, World!" << std::endl;

//     int a = 5;
//     int *p;
//     p = &a;
//     cout << "int *p:" << sizeof(p) << endl;
//     cout << p << endl;

//     int *point = NULL;
//     int c;
//     const int * const p3 = &c;
//     return 0;
// }

// int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // // for (int i = 1,j=0; i <= 10; i++)
    // // {

    // //     cout << "该数组的第" << i << "个数字是:" << arr[j] << endl;
    // //     j++;

    // // }
    // int *p =arr;
    // for (int j = 1; j <= 10;j++)
    // {
    //       cout << "利用指针访问数组第"<<j<<"个数：" << *p << endl;
    //       cout << "该数组第" << j << "个元素的内存地址是：" << p << endl;
    //       p++;

    // }


int maopao(int arr[])
{
 cout << "排序前数组顺序:" << endl;

    for (int i = 0; i <= 8; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int Allowance;

    for (int k = 0; k < 8; k++)
    {
        for (int j = 0; j < 9; j++)
        {
            
            if (arr[j] < arr[j + 1])
            {
                Allowance = arr[j + 1];
                arr[j + 1]=arr[j] ;
                arr[j]= Allowance;
            };
        };
    };

    cout << "排序后的数组顺序（从大到小）:" << endl;

    for (int i = 0; i <= 8;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

int main()
{
    

    int Romdon[9] = {4, 6, 8, 1, 5, 7, 2, 3, 9};

    maopao(Romdon);
}

