//Question : https://leetcode.com/problems/two-sum/
//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

//Time complexity = O(n)
//Space Complexity = O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        int n = nums.size();
      
        //map to store elements of nums[] as key, and its index as value
        unordered_map<int, int>mp;
        
        for(int i = 0; i < n; i++){
            if(mp.find(target-nums[i]) != mp.end()){
                res.push_back(i);
                res.push_back(mp[target-nums[i]]);
                break;
            }
            else{
                mp[nums[i]] = i;
            }
        }
      
        return res;
    }
};
