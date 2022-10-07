/*Problem
Chef has NN friends. Chef promised that he would gift a pair of shoes (consisting of one left shoe and one right shoe) to each of his NN friends. Chef was about to go to the marketplace to buy shoes, but he suddenly remembers that he already had MM left shoes.

What is the minimum number of extra shoes that Chef will have to buy to ensure that he is able to gift a pair of shoes to each of his NN friends?

For example, if N = 2N=2, M = 4M=4, then Chef already has 44 left shoes, so he must buy 22 extra right shoes to form 22 pairs of shoes.

Therefore Chef must buy at least 22 extra shoes to ensure that he is able to get N = 2N=2 pairs of shoes.*/



#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    if(n<m){
	        cout<<n<<endl;
	    }
	    else{
	        cout<<(n*2)-m<<endl;
	    }
	}
	return 0;
}
