#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
/*int findDuplicate(vector<int> &arr)
{
    int ans = 0;
    // Xoring all elements
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    // Xor (1,n-1)
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }
    return ans;*/

//  duplicating finding in leetcode
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
       sort(nums.begin(),nums.end());
        int firstElement=nums[0];
       for(int i=1;i<nums.size();i++){
           if((firstElement^nums[i])==0){
               ans.push_back(nums[i]);
           }
           firstElement=nums[i];
       }
        return ans;
    }
};

