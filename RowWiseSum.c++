#include <iostream>
#include <stdio.h>
#include <climits>

using namespace std;

void printSum(int arr[][3], int row, int col)
{
    cout << "Printing Row Sum -> " << endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (
            int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

void printColSum(int arr[][3], int row, int col)
{
    cout << "Printing Col Sum -> " << endl;
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int largestRowSum(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }

        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "The maximum sum is " << maxi << endl;
    return row;
}

int main()
{
    int arr[3][3];
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }
    // print the array
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    printSum(arr, 3, 3);
    printColSum(arr, 3, 3);

    int ansIndex = largestRowSum(arr, 3, 3);
    cout << "Max Row is at Index " << ansIndex << endl;
    return 0;
}