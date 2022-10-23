class Solution {
public:
    #define ll long long
    vector<vector<int>> fourSum(vector<int>& nums, ll target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        ll n = nums.size();
        for(ll i=0; i<n-3; i++) {
            if(i>0 && nums[i]==nums[i-1]) {
                continue;
            }
            
            for(ll j=i+1; j<n-2; j++) {
                if(j>i+1 && nums[j]==nums[j-1]) {
                continue;
                }
                
                ll tSum = target - (nums[i]+nums[j]);
                ll l = j+1;
                ll h = n-1;
                
                while(l<h) {
                    if(nums[l] + nums[h] == tSum) {
                        vector<int>oneAns = {nums[i], nums[j], nums[l], nums[h]};
                        ans.push_back(oneAns);
                        
                        while(l<h && nums[l]==nums[l+1]) {
                            l++;
                        }
                        
                        while(l<h && nums[h]==nums[h-1]) {
                            h--;
                        }
                        
                        l++;
                        h--;
                    }
                    
                    else if(nums[l] + nums[h]<tSum) {
                        l++;
                    }
                    
                    else {
                        h--;
                    }
                }
            }
        }
        return ans;
    }
};
