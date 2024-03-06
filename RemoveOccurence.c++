#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        while (s.length() != 0 && s.find(part) < s.length()) {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

int main() {
    Solution solution;

    string inputString = "This is a test string. This string has some repeated words.";
    string substringToRemove = "string";
    string result = solution.removeOccurrences(inputString, substringToRemove);

    cout << "Original string: " << inputString << endl;
    cout << "Substring to remove: " << substringToRemove << endl;
    cout << "String after removal: " << result << endl;

    return 0;
}
