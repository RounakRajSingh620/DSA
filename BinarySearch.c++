#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 10, 18};
    int odd[5] = {3, 5, 7, 13, 14};

    int evenIndex = binarySearch(even, 6, 8);
    cout << "Index of 8 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 13);
    cout << "Index of 13 is " << oddIndex << endl;

    return 0;
}
