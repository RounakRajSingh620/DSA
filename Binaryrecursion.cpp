#include <iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int key)
{
    // base case
    if (s > e)
    {
        return -1;
    }
    int mid = (s + e) / 2;
    if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, e, key);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, key);
    }
}
int main()
{
    int arr[6] = {2, 4, 6, 3, 5, 7};
    int size = 6;
    int key = 5;

    return 0;
}