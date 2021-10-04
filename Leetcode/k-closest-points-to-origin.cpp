class Solution {
public:
    int distance(int x, int y){
        return (x*x)+(y*y);
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int,int>> dist;
        for(int i=0;i<points.size();i++){
            dist.push_back({distance(points[i][0], points[i][1]), i});
        }
        sort(dist.begin(),dist.end());
        
        vector<vector<int>> res;
        for(int i=0;i<k;i++)
            res.push_back(points[dist[i].second]);
        
        return res;
    }
};
