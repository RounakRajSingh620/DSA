#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());
        for(int i = 0; i < nums.size(); i++) {
            temp[(i + k) % nums.size()] = nums[i];
        }
        nums = temp;
    }
};

int main() {
    Solution sol;

    // Example usage
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 3;

    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    sol.rotate(nums, k);

    cout << "After rotating right by " << k << " steps: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
