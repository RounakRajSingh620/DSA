#include <iostream>
#include <string>
using namespace std;

class Solution
{
private:
    bool checkEqual(int a[26], int b[26])
    {
        for (int i = 0; i < 26; i++)
        {
            if (a[i] != b[i])
                return false;
        }
        return true;
    }

public:
    bool checkInclusion(string s1, string s2)
    {

        // character count array
        int count1[26] = {0};

        for (int i = 0; i < s1.length(); i++)
        {
            int index = s1[i] - 'a';
            count1[index]++;
        }

        // traverse s2 string window of size s1 length and compare
        int i = 0;
        int windowSize = s1.length();
        int count2[26] = {0};

        // running for first window
        while (i < windowSize && i < s2.length())
        {
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }
        if (checkEqual(count1, count2))
            return true;

        // next window process
        while (i < s2.length())
        {
            char newChar = s2[i];
            int index = newChar - 'a';
            count2[index]++;

            char oldChar = s2[i - windowSize];
            index = oldChar - 'a';
            count2[index]--;
            i++;
            if (checkEqual(count1, count2))
                return true;
        }
        return false;
    }
};

int main()
{
    Solution solution;
    string s1 = "ab";
    string s2 = "eidbaooo";

    if (solution.checkInclusion(s1, s2))
    {
        cout << "s2 contains the permutation of s1." << endl;
    }
    else
    {
        cout << "s2 does not contain the permutation of s1." << endl;
    }
    s1 = "abc";
    s2 = "eidbaooo";

    if (solution.checkInclusion(s1, s2))
    {
        cout << "s2 contains the permutation of s1." << endl;
    }
    else
    {
        cout << "s2 does not contain the permutation of s1." << endl;
    }

    return 0;
}
