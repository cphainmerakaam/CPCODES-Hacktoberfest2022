/*
Code Chef 
Paying up
https://www.codechef.com/problems/A1
Solution
*/

#include <bits/stdc++.h>
using namespace std;

bool recursive_find(int arr[] , int idx , int t, int n){
    if(t == 0 || t == arr[idx])
        return true;
    if(idx == n)
    return false;
    bool temp = false;
    if(arr[idx] < t && recursive_find(arr,idx+1,t-arr[idx],n) == true)
    return true;
    return recursive_find(arr,idx+1,t,n);
}

void solver(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    int total = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        total += arr[i];
    }
    if(total < m){
        cout<<"No"<<endl;
        return;
    }
    bool temp = recursive_find(arr,0,m,n);
    if(temp == 1){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}

int main(){
    int t = 1;
    cin>>t;
    while (t-->0)
    solver();
    
}