#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    cout << "address of first memory block: " << arr << endl;
    cout << arr[0] << endl;
    cout << "address of first memory block : " << &arr[0] << endl;
    return 0;
}