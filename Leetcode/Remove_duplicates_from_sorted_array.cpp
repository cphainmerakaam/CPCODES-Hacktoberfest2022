/*  https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/727/  */


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size()==0) return 0;  //base case
        if(nums.size()==1) return 1;  //base case
        
        vector<int>::iterator ip;   //creating a vector
        ip=unique(nums.begin(),nums.begin()+nums.size()); //unique function will return total no of unique elements 
        nums.resize(distance(nums.begin(),ip));   //for resizeing vector 
       
        int len = nums.size();  
     
        return len;   
    }
};
