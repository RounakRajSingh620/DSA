#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    cout << num << endl;

    // address of num
    cout << "address of num  " << &num << endl;

    // pointer variable
    int *ptr = &num;
    cout << "Value is : " << *ptr << endl;

    return 0;
}