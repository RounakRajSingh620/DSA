#include <iostream>
#include <stack>

using namespace std;
class Solution
{
public:
    string reverseVowels(string s)
    {
        stack<char> vowels;
        string vowelSet = "aeiouAEIOU";

        for (char ch : s)
        {
            if (vowelSet.find(ch) != string::npos)
            {
                vowels.push(ch);
            }
        }
        for (char &ch : s)
        {
            if (vowelSet.find(ch) != string::npos)
            {
                ch = vowels.top();
                vowels.pop();
            }
        }
        return s;
    }
};

int main(){
    Solution solution;
    string s = "hello";
    cout << "Reversed vowels of " << s << " is " << solution.reverseVowels(s) << endl;
    s = "leetcode";
    cout << "Reversed vowels of " << s << " is " << solution.reverseVowels(s) << endl;
    return 0;

}