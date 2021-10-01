/*
Code Chef 
The Best Box
https://www.codechef.com/problems/J7
Solution
*/

#include <bits/stdc++.h>
using namespace std;

void solver(){
    int parameter,surface;
    cin>>parameter>>surface;
    double l = (parameter-sqrt(pow(parameter,2)-24*surface))/12;
    double v = l*(surface/2.0 - l*(parameter/4.0 -l));
    cout<<fixed<<setprecision(2)<<v<<endl;
    return;
}

int main() {
   int t = 1;
   cin>>t;
   while(t-->0)
       solver();
	return 0;
}