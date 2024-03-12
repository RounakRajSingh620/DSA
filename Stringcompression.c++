#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int ansIndex = 0;
        int n = chars.size();
        while (i < n) {
            int j = i + 1;
            while (j < n && chars[i] == chars[j]) {
                j++;
            }

            // Store the current character
            chars[ansIndex++] = chars[i];
            int count = j - i;

            // If count is greater than 1, store it as well
            if (count > 1) {
                string cnt = to_string(count);
                for (char ch : cnt) {
                    chars[ansIndex++] = ch;
                }
            }
            // moving to new/different char
            i = j;
        }
        return ansIndex;
    }
};

int main() {
    Solution solution;
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    
    int compressedSize = solution.compress(chars);
    
    cout << "Compressed array: ";
    for (int i = 0; i < compressedSize; ++i) {
        cout << chars[i] << " ";
    }
    cout << endl;
    
    return 0;
}
