/*
Code Chef 
Decreasing String
https://www.codechef.com/problems/DECSTR
Solution
*/

#include <iostream>
using namespace std;

void solver(){
       int k;
       cin>>k;
       string ans="";
        while(k>=25){
         ans = ans + "zyxwvutsrqponmlkjihgfedcba";
         k-=25;
        }
        if(k>0){
         for(int i=k;i>=0;i--)
             ans = ans + char('a'+i);
     }
     cout<<ans<<endl;
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