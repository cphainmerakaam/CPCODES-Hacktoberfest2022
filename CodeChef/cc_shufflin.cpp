// this code is the solution for the problem Shuffling Parties :- https://www.codechef.com/SEPT21C/problems/SHUFFLIN

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    int t;
    cin>>t;
    while(t--){
        ll n,e=0,o=0,res=0;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
          for(ll i=0;i<n;i++){
            if(a[i]%2==0)
            e++;
            else
            o++;
        }
      res = min(e,(n+1)/2) + min(o,n/2);
        cout<<res<<endl;
    }
	return 0;
}
