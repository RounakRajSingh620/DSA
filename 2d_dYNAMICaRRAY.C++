#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;

    // initializing 2d array in heap

    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    // input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    // output
    cout << "output" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // deleting the 2d array
    for(int i=0;i<row;i++)
    {
        delete [] arr[i];
    }
    delete [] arr;
}