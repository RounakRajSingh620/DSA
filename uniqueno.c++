#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

class Solution {
public:
    bool uniqueOccurrences(std::vector<int>& arr) {
        int low = 0;
        int high = 0;
        int n = arr.size();
        std::sort(arr.begin(), arr.end());
        std::vector<int> ans;
        std::set<int> set;
        while (high <= n - 1) {
            if (high != n - 1 && arr[high] < arr[high + 1]) {
                ans.push_back(high - low + 1);
                high++;
                low = high;
            } else if (high == n - 1 && low == high) {
                ans.push_back(high - low + 1);
                break;
            } else if (high == n - 1 && low != high) {
                ans.push_back(high - low + 1);
                break;
            } else {
                high++;
            }
        }
        int i = 0;
        while (i < ans.size()) {
            set.insert(ans[i]);
            i++;
        }
        if (ans.size() == set.size()) {
            // Means unique number of occurrences
            return true;
        } else {
            // Else the set will remove duplicates and the condition will fail
            return false;
        }
    }
};

int main() {
    Solution solution;

    // Example usage:
    std::vector<int> arr1 = {1, 2, 2, 1, 1, 3};
    std::cout << std::boolalpha << solution.uniqueOccurrences(arr1) << std::endl; // Output: true

    std::vector<int> arr2 = {1, 2};
    std::cout << std::boolalpha << solution.uniqueOccurrences(arr2) << std::endl; // Output: false

    std::vector<int> arr3 = {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};
    std::cout << std::boolalpha << solution.uniqueOccurrences(arr3) << std::endl; // Output: true

    return 0;
}
