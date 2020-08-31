// /Code by : Harry_Singh/
#include<bits/stdc++.h>
#define int long long
#define double double
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)
#define fo(i,n) for(int i=n;i>=0;i--)
#define F(i,n) for(int i=1;i<=n;i++)
#define f_a(a,i,n) for(int i=a;i<=n;i++)
#define f_b(a,i,b) for(int i=a;i<=b;i++)
#define FO(i,n) for(int i=n;i>=1;i--)
#define mod 998244353
using namespace std;
#define inf 100000000000000009
#define tr cout<<"\n" 
#define br break
#define N 100001
#define range 100000000000000
// directions

 priority_queue<int>q;

void Pencho()
{
 int n;
 cin>>n;
		int a;
		F(i,n)cin>>a,q.push(a);
		int las=0,now=1;
		while(!q.empty()){
			int x=q.top();q.pop();
			now^=1;
			if(las)q.push(las);/// This is the value We take from the previous baby
			las=x-1;
		}
		puts(now?"HL":"T");
}
 
 




int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g;cin>>g;
    while (g--)Pencho();
    return 0;
}