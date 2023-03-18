#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,k,i;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll>v(n);
        map<ll,ll>m1;
        ll c=0;
        for(i=0; i<n; i++){
            cin>>v[i];
            m1[v[i]-i-1]++;
        }
        if(m1[v[0]-1]==n){
            cout<<n<<"\n";
        }else{
            cout<<"1\n";
        }
 
    }
}
