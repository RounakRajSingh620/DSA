#include <iostream>
using namespace std;

int saydigits(int n, string arr[10])
{
    // base case
    if (n == 0)
        return 0;

    // processing
    int digits = n % 10;
    n = n / 10;

    // recursive call
    saydigits(n, arr);
    cout << arr[digits] << " ";
}
int main()
{
    int n;
    cin >> n;

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout << endl;
    saydigits(n, arr);
    cout << endl;
    return 0;

}