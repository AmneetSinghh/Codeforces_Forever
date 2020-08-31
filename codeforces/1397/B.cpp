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
   sort(a+1,a+1+n);
   int cost=0;
   if(n>=60){
   	F(i,n)cost+=(a[i]-1);
   	cout<<cost;
   	tr;
   }
   else
   {
   	int mi=inf;
   	for(int i=1;i<=1000000;i++)
   	{
      // loop n baby
   		int tom=1;
   		int ans=0;
   		for(int j=1;j<=n;j++)
   		{
         ans+=(abs(a[j]-tom));
         if(ans>range)break;
         tom*=i;
   		}
   		if(ans<0 || ans>range)continue;
   		mi=min(mi,ans);
   	}
   	cout<<mi;
   	tr;

   }

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