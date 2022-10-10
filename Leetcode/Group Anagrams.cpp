class Solution 
{
    public:
    vector<vector<string>>ans;
    map<string,vector<string>>m;
    
    vector<vector<string>> groupAnagrams(vector<string>&v) 
    {
        for(int i=0;i<v.size();i++)
        {
            string temp = v[i];
            sort(temp.begin(),temp.end());
            m[temp].push_back(v[i]);
        }
        
        auto it=m.begin();
        for( ;it!=m.end();it++)
        {
             vector<string>v1;
             int run = (it->second).size();   
             while(run>0)
             {
                 run--;
                 v1.push_back(it->second[run]);
             }
            
            ans.push_back(v1);
        }
        
        return ans;
        
    }
};
