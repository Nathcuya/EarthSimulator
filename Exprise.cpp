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

    for (int i = 0; i < len-1; i++)
    {
        for (int j = 0; j < len-i-1; j++)
        {
            if (HeroArray[j].age > HeroArray[j + 1].age)
            {
               struct Character temp = HeroArray[j];
                HeroArray[j] = HeroArray[j+1];
                HeroArray[j+1] = temp;
            }
        }
    };
   
};

void PrintHero(struct Character HeroArray[], int len)
{
    cout << "年龄升序后的英雄数据如下:" << endl;
    for (int i = 0; i < len;i++)
{
        cout << "姓名:" << HeroArray[i].Name << "年龄:" << HeroArray[i].age << "性别:" << HeroArray[i].gender << endl;
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
    PrintHero(HeroArray, len);
}
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

