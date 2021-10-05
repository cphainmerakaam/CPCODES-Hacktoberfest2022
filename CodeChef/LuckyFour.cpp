#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long t;
	cin >> t;
	while(t--)
	{
	    long n;
    cin >> n;
    int ans = 0;
    int rem;
    int count = int(log10(n))+1;
    for(int i=0;i<count;i++)
    {
        rem = n%10;
        n = n/10;
        if(rem == 4)
        ans++;
    }
    cout << ans << endl;
	}
	return 0;
}
