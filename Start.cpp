#include <iostream>

using namespace std;

int main()
{
    std::cout << "Hello, World!" << std::endl;

    int a = 5;
    int *p;
    p = &a;

    cout << p << endl;

    return 0;
}
