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

    double d = 5.5;
    double *p2 = &d;

    cout << "Value is : " << *p2 << endl;
    cout << "Address of d : " << p2 << endl;

    cout << "Size of int : " << sizeof(num) << endl;
    cout << "Size of ptr : " << sizeof(ptr) << endl;

    return 0;
}