class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       
        int n = nums1.size() + nums2.size();
        vector<int> nums3(n);
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),nums3.begin());


         double me;

    if(n%2!=0)
    {
        
       me=nums3[(n)/2];
        
    }
        else{
      me=(nums3[n/2] + nums3[n/2 - 1])/2.00;
        }
        
    return me;
    }
};

