#include <iostream>
using namespace std;

/*int main()
{
    int array[100];
    fill_n(array, 100, 1);
    for (int i = 0; i <= 5; i++)
    {
        cout << array[i] << endl;
    }
}*/

void printArray(int arr[], int size)
{
    cout << "printing the array" << endl;
    // print the array
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Printing DONE" << endl;
}

int main()
{
    int number[15];
    // accessing an array
    cout << "Value at 14 index" << number[14] << endl;

    // initialising an array
    int second[3] = {5, 7, 11};
    // accessing an array
    cout << "Value at 2 index" << second[2] << endl;

    int third[15] = {2, 7};
    int n = 15;
    printArray(third, 15);
    // initialising all locations with 0
    int fourth[10] = {0};
    n = 10;
    printArray(fourth, 10);
    // initialising all locations with 1

    int fifth[10] = {1};
    n = 10;
    printArray(fifth, 10);

    int fifthsize = sizeof(fifth) / sizeof(int);
    cout << "Size of fifth is " << fifthsize << endl;
}