
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int modularExponentiation(int x, int n, int m)
{
    int res = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            // odd
            res = (1LL * (res) * (x) % m) % m;
        }
        x = (1LL * (x) % m * (x) % m) % m;
        n = n >> 1;
    }
    return res;
}
int main()
{
    int x = 3;       
    int n = 2;       
    int m = 1000000007; 

    int result = modularExponentiation(x, n, m);

    cout << "Result of modular exponentiation: " << result << endl;

    return 0;
}
