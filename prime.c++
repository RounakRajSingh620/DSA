#include <iostream>
using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 2;
//     while (i < n)
//     {
//         if (n % i == 0)
//         {
//             cout << "Not Prime for " << i << endl;
//         }
//         else
//         {
//             cout << "Prime for " << i << endl;
//         }
//         i = i + 1;
//     }
// }
#include <iostream>
#include <vector>

class Solution
{
    bool isPrime(int n)
    {
        if (n <= 1)
            return false;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }

public:
    int countPrimes(int n)
    {
        int count = 0;
        for (int i = 2; i < n; i++)
        {
            if (isPrime(i))
                count++;
        }
        return count;
    }
};

int main()
{
    Solution solution;
    int n;
    cin >> n;
    int primesCount = solution.countPrimes(n);
    cout << primesCount << endl;
    return 0;
}
