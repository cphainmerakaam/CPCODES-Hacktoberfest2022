#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, i,j;
	long int S[5000], temp, diff;
	cin>>t;
	while(t--){
	    
	    cin>>n;
	    for (i=0; i<n; i++)
	        cin>>S[i];
	    
	    for (i=0; i<n; i++){
	        for (j=i; j<n; j++){
	            if (S[i]>S[j]){
	                temp = S[i];
	                S[i] = S[j];
	                S[j] = temp;
	            }
	        }
	    }
	    
	    diff = S[1]-S[0];
	    for (i=2; i<n; i++){
	        if (diff>S[i]-S[i-1])
	            diff = S[i]-S[i-1];
	    }
	    
	    cout<<diff<<endl;
	    
	}
	return 0;
}
