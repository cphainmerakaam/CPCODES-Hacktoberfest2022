#include <bits/stdc++.h>
using namespace std;




int main(){
    
    int t;
    cin>>t;
    int c;
    
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int c=z*2;
        if(x+c >= y){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;    

}
