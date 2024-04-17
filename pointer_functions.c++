#include <iostream>
using namespace std;

void print(int *p)
{
    cout << *p << endl;
}

int main()
{
    int value = 5;
    int *p = &value;

    cout << p << endl;

    return 0;
}