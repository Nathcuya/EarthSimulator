#include <iostream>
using namespace std;

struct Character
{
    string Name;
    int age;
    string gender;
};

void BubbleSort(struct Character HeroArray[], int len)
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (HeroArray[i].age < HeroArray[i + 1].age)
            {
                int temp = HeroArray[i + 1].age;
                HeroArray[i + 1].age = HeroArray[i].age;
                HeroArray[i].age = temp;
            }
        }
    }
};

int main()
{
    Character HeroArray[5] =
        {
            {"关羽", 22, "男"},
            {"刘备", 23, "男"},
            {"赵云", 14, "男"},
            {"张飞", 20, "男"},
            {"貂蝉", 18, "女"}

        };
    int len = sizeof(HeroArray) / sizeof(HeroArray[0]);

    BubbleSort(HeroArray,len);

    
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

// void  maopao(int arr[])
// {
//  cout << "排序前数组顺序:" << endl;

//     for (int i = 0; i <= 8; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     int Allowance;

//     for (int k = 0; k < 8; k++)
//     {
//         for (int j = 0; j < 9; j++)
//         {

//             if (arr[j] < arr[j + 1])
//             {
//                 Allowance = arr[j + 1];
//                 arr[j + 1]=arr[j] ;
//                 arr[j]= Allowance;
//             };
//         };
//     };

//     cout << "排序后的数组顺序（从大到小）:" << endl;

//     for (int i = 0; i <= 8;i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

// }

// int main()
// {

//     int Romdon[9] = {4, 6, 8, 1, 5, 7, 2, 3, 9};

//     maopao(Romdon);
// }

// struct Account
// {
//     string name;
//     string password;

// }acc1[2];

// int main()
// {
//     Account acc1[2] = {{"nath", "shi050423"},{"Nath","Shi050423"}};
//     cout<< "账户名称：" << acc1[0].name << endl;
// }