#include <iostream>
using namespace std;

int main() {
	

int a;
cin>>a;

for(int b=0;b<a;b++){
    
    
    
    long int c;
    cin>>c;
    long int d[c];
    
    for(int e=0;e<c;e++){
        cin>>d[e];
    }
    
    long int dp[c];
    dp[c-1]=1;
    
    for(int g=(c-2);g>=0;g--){
        
        if(d[g]<0 && d[g+1]<0 || d[g]>0 && d[g+1]>0){
            dp[g]=1;
        }
        else{
            dp[g]=dp[g+1]+1;
        }
        
        
        
        
    }
    
    
    for(int e=0;e<c;e++){
        cout<<dp[e]<<" ";
    }
    cout<<endl;
       
}


}
