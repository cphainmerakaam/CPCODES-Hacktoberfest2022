// Question link: https://leetcode.com/problems/median-of-two-sorted-arrays/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int sz1 = nums1.size();
        int sz2 = nums2.size();
        int sz3 = sz1+sz2;
        int i=0,j=0,k=0;
        int* arr = new int[sz1+sz2];
        
        while(k<sz3 && i<sz1 && j<sz2){
            if(nums1[i] <= nums2[j])
                arr[k++] = nums1[i++];
            else
                arr[k++] = nums2[j++];
        }
        while(i<sz1) arr[k++] = nums1[i++];
        
        while(j<sz2) arr[k++] = nums2[j++];

        
        if(sz3&1)
            return (double) arr[sz3/2];
        
        else
            return (double)(arr[sz3/2]+arr[sz3/2-1])/2;
            
    }
};
