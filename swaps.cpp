//Author -> Samkit Jain
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    ll t;
    cin>>t;
    for(ll test=1;test<=t;test++)
    {
        ll n;
        cin>>n;
        map<ll,ll>a1;
        map<ll,ll>b1;

        for(ll i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            a1[temp]=i;
        }        
        
        for(ll i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            b1[temp]=i;
        }        

        ll ans  = INTMAX_MAX;
        ll less = INTMAX_MAX;
        for(ll i=(2*n)-1;i>=1;i-=2)
        {
            less = min(less,b1[i+1]);
            ans  = min(ans,a1[i]+less);
        }

        cout<<ans<<"\n";
    }
    return 0;
}
