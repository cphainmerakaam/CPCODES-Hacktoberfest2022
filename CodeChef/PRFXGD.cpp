/*
Code Chef 
Good Prefix
https://www.codechef.com/problems/PRFXGD
Solution
*/
#include <bits/stdc++.h>
using namespace std;

void solver(){
    string s;
    cin>>s;
    int k,x;
    cin>>k>>x;
    int counter = 0;
    int arr[26];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<s.length();i++){
        if( arr[s[i]-'a'] >= x){
            if(k>0){
                --k;
                continue;
            }
            cout<<counter<<endl;
            return;
        }else{
            arr[s[i]-'a'] += 1;
            ++counter;
        }
    }
    cout<<counter<<endl;
    return;
}

int main() {
   int t =1;
   cin>>t;
   while(t-->0){
       solver();
   }
	return 0;
}