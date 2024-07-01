#include <iostream>
#include <string>
using namespace std;

// one pointer
void reverse(string &str, int i)
{
    int n = str.length();
    if (i >= n / 2)
    {
        return;
    }

    swap(str[i], str[n - i - 1]);
    reverse(str, i + 1);
}

string reverseString(string str)
{
    reverse(str, 0);
    return str;
}

// /two pointers
// void reverse(string& str, int i, int j) {
//     if (i > j) {
//         return;
//     }

//     swap(str[i], str[j]);
// i++;
// j--;
//     reverse(str, i , j );
// }

int main()
{
    string str = "Hello, World!";
    cout << reverseString(str) << endl;
    return 0;
}
