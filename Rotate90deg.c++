#include <iostream>
#include <vector>
#include <algorithm> // For std::reverse

using namespace std;

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        // Transpose the matrix
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        // Reverse each row to get the final rotated matrix
        for (int i = 0; i < n; i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

void printMatrix(const vector<vector<int>> &matrix)
{
    for (const auto &row : matrix)
    {
        for (int num : row)
        {
            cout << num << " ";
        }
        cout << "\n";
    }
}

int main()
{
    Solution sol;
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    cout << "Original matrix:\n";
    printMatrix(matrix);

    sol.rotate(matrix);

    cout << "Rotated matrix by 90 degrees clockwise:\n";
    printMatrix(matrix);

    return 0;
}
