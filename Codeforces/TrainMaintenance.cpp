// Problem - 1580C
// Problem Link - https://codeforces.com/problemset/problem/1580/C

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=2e5+5;
int n,m,now,all;
int a[M],b[M],st[M];
int s[M],t[455][455];
void work(int x,int d,int op){
	all+=op;
	if(op==1)st[x]=d;
	if(a[x]+b[x]>450){
		for(int i=st[x];i<=m;i+=a[x]+b[x])s[i]+=op;
		for(int i=st[x]+a[x];i<=m;i+=a[x]+b[x])s[i]-=op;
	}
	else{
		int c=a[x]+b[x];
		t[c][st[x]%c]+=op;
		t[c][(st[x]+a[x])%c]-=op;
	}
	if(op==-1&&(d-st[x]-1+(a[x]+b[x]))%(a[x]+b[x])<a[x])--now;
}
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)scanf("%d%d",&a[i],&b[i]);
	now=0;
	for(int i=1,op,x;i<=m;i++){
		scanf("%d%d",&op,&x);
		work(x,i,op==1?1:-1);
		now+=s[i];
		for(int j=1;j<=450;j++)now+=t[j][i%j];
		printf("%d\n",all-now);
	}
	return 0;
}
