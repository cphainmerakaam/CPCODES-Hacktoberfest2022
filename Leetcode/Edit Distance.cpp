// Problem Link - https://leetcode.com/problems/edit-distance/

// Memoization Solution

/*#define ll long long
class Solution {
public:
    ll editDistanceMemoizationHelper(string s, string t, ll** arr)
{
    ll m = s.length(), n = t.length();
    if(arr[m][n]!=-1)
    {
        return arr[m][n];
    }
    if(m==0 and n==0)
    {
        arr[m][n] = 0;
        return arr[m][n];
    }
    if(m==0)
    {
        arr[m][n] = n;
        return arr[m][n];
    }
    if(n==0)
    {
        arr[m][n] = m;
        return arr[m][n];
    }
    ll a = INT_MAX, b = INT_MAX, c = INT_MAX, ans;
    if(s[0]==t[0])
    {
        ans = editDistanceMemoizationHelper(s.substr(1),t.substr(1),arr);
    }
    else
    {
        a = 1 + editDistanceMemoizationHelper(s.substr(1), t,arr);
        b = 1 + editDistanceMemoizationHelper(s,t.substr(1),arr);
        c = 1 + editDistanceMemoizationHelper(s.substr(1),t.substr(1),arr);
        ans =  min(a,min(b,c));
    }

    arr[m][n] = ans;
    return arr[m][n];

}
    
    int minDistance(string s, string t) {
         
      ll m = s.length();
  ll n = t.length();
  ll** arr = new ll*[m+1];
  for(ll i=0;i<=m;i++)
  {
      arr[i] = new ll[n+1];
      for(ll j=0;j<=n;j++)
      {
          arr[i][j] = -1;
      }
  }
  ll ans = editDistanceMemoizationHelper(s,t,arr);
  for(ll i=0;i<=m;i++)
  {
      delete [] arr[i];
  }
  delete [] arr;
  return ans;
    }
};*/

// DP Solution

#define ll long long
class Solution {
public:
    
    int minDistance(string s, string t) {
       ll m = s.length();
    ll n = t.length();
    ll dp[m+1][n+1];
    for(ll i=0;i<=m;i++)
    {
        dp[i][0] = i;
    }
    for(ll i=0;i<=n;i++)
    {
        dp[0][i] = i;
    }
    for(ll i=1;i<=m;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            if(s[m-i]==t[n-j])
            {
                dp[i][j] = dp[i-1][j-1];
            }
            else {
                ll a = dp[i-1][j];
                ll b = dp[i][j-1];
                ll c = dp[i-1][j-1];
                dp[i][j] = 1 + min(a, min(b, c));
            }
        }
    }
   
    return dp[m][n];
    }
};
