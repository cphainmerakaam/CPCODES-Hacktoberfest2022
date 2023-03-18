class Solution {
    public int networkDelayTime(int[][] times, int n, int k) {
        int[] dp=new int[n+1];
        Arrays.fill(dp,Integer.MAX_VALUE);
        dp[k]=0;
        for(int i=1;i<=n-1;i++){
           
                for(int[] m:times){
                    int u=m[0];
                    int v=m[1];
                    int w=m[2];
                    if(dp[u]!=Integer.MAX_VALUE &&dp[u]+w<dp[v])dp[v]=dp[u]+w;
                }
            }
        
        int max=Integer.MIN_VALUE;
       for(int i=1;i< dp.length;i++){
            if(dp[i]==Integer.MAX_VALUE)return -1;
            max=Math.max(max,dp[i]);
        }
        return max;
        }
    }
