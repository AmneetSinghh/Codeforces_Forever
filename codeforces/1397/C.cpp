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
 
void Pencho()
{
 int n;
 cin>>n;
 int a[n+1];
 F(i,n)cin>>a[i];
 cout<<"1 1";tr;
 cout<<a[1]*(n-1);
 tr;
(n==1)?cout<<"1 1"<<endl<<"0":cout<<"2 "<<n<<endl;
for(int i=2;i<=n;i++)cout<<a[i]*(n-1)<<" ";
tr;
cout<<"1 "<<n;
tr;
F(i,n)cout<<-a[i]*n<<" ";
tr;
}
 
 
 
 
 
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g=1;
    while (g--)Pencho();
    return 0;
}