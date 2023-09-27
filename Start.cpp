#include <iostream>

using namespace std;

int main()
{
    std::cout << "Hello, World!" << std::endl;

    int a = 5;
    int *p;
    p = &a;
    cout << "int *p:" << sizeof(p) << endl;
    cout << p << endl;

    int *point = NULL;
    
    return 0;
}
