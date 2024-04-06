#include <iostream>
using namespace std;
int main()
{
    int arr[10];

    std::cout << "address of first memory block: " << arr << endl;
    std::cout << arr[0] << endl;
    std::cout << "address of first memory block : " << &arr[0] << endl;

    return 0;
}