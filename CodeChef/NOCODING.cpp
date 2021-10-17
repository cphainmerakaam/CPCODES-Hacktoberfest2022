/*
Code Crazy Minions
https://www.codechef.com/problems/NOCODING
Solution
*/

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define ld long double // max size
#define u unsigned
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loop_negative(i,a,b) for(int i=a;i>=b;i--)
#define loop_intake(i,n) loop(i,0,n)
#define pb push_back
#define mod 1000000007

using namespace std;

typedef pair<int,int>   PI;
typedef vector<int> VI;
typedef pair<vector<int>,vector<int> > VIP;


void slover(){
    string s;
    cin>>s;
    int y = s.length();
    int val = 0;
    for(int i = 0 ;i <y-1 ; i++){
        if(s[i] > s[i+1]){
            val += 26 - s[i] + s[i+1];
        }else{
        val += s[i+1]-s[i];
        }
    }
    if(val < y*10)
    cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
return;
}

int main(){
    int test_case ;
    cin>>test_case;
//test_case = 1;
while(test_case--){
   slover();
}
return 0;
}
