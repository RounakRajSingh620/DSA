#include <iostream>
using namespace std;

void print(int arr[], int N)
{
    cout << "Size of array is: " << N << endl;
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool linearSearch(int arr[], int size, int key)
{
    print(arr, size);
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        return linearSearch(arr + 1, size - 1, key);
    }
}

int main()
{
    int arr[6] = {2, 4, 6, 3, 5, 7};
    int size = 6;
    int key = 5;

    bool ans = linearSearch(arr, size, key);
    cout << ans;
    if (ans)
    {
        cout << "Element is present";
    }
    else
    {
        cout << "Element is not present";
    }
    return 0;
}
