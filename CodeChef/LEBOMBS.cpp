/*
Code Chef 
Little Elephant and Bombs
https://www.codechef.com/problems/LEBOMBS
Solution
*/

#include <bits/stdc++.h>
using namespace std;

void solver(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1){
        if(s[0] == '1'){
            cout<<0<<endl;
            return;
        }
        cout<<1<<endl;
        return;
    }
    unsigned int leftover = 0;
    s = s[1] + s;
    s = s + s[n-1];
    n = s.length();
    for(int i = 1;i<n-1;i++){
        if(s[i-1] == '0' && s[i+1] == '0' && s[i] == '0')
        leftover++;
    }
    cout<<leftover<<endl;
    return;
}

int main() {
   int t = 1;
   cin>>t;
   while(t-->0)
       solver();
	return 0;
}