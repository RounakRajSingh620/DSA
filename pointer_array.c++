#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "address of first memory block: " << arr << endl;
    std::cout << arr[0] << endl;
    std::cout << "address of first memory block : " << &arr[0] << endl;
    cout << "4th " << *arr << endl;
    return 0;
}