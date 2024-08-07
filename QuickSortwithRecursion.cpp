/*space Complexity - O(n)
time Commplexity - O(nlog n) (average case)
time Commplexity - O(n^2) (worst case)
*/

#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }

    // place pivot at right position

    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);
    //  left and right partition

    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quicksort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    // partition
    int p = partition(arr, s, e);
    // recursive call left side
    quicksort(arr, s, p - 1);
    // recursive call right side
    quicksort(arr, p + 1, e);
}

int main()
{
    int arr[5] = {5, 15, 3, 10, 9};
    int n = 5;

    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
