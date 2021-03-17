/* not_stable but Believer */
#include<bits/stdc++.h>
#define int int
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i, n) for(int i=0;i<n;i++)
#define F(i, n) for(int i=1;i<=n;i++)
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define oo (1<<30)
#define mod 998244353
using namespace std;
const int maxn=100005;
// ******************************* EITHER UP OR DOWN BUT PRACTICE NEVER ENDS ******************************************
int leastnumber(int n)
{
	int ans=1;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			int c=0;
			while(n%i==0)
			{
				c++;
				n/=i;
			}
			if(c&1)
			ans*=i;
		}
	}
	if(n>1)
	ans*=n;
	return ans;
}

void Not_Stable(){
 int n,k;
 // 6 8 1 24 8;
 cin>>n>>k;
 // just take one number convert into the prime factorizations:
 // so we want even number of each and every prime so that is the perfect square;
 int ans=1;
 int a[n+1];
 F(i,n){
 	int val;
 	cin>>val;
    a[i]=leastnumber(val);
 }
 
       set<int>s;
	   F(i,n)
	   {
	   	if(s.find(a[i])!=s.end())
	   	{
	   		ans++;
	   		s.clear();
		 }
		   s.insert(a[i]);
	   }

 cout<<ans;
 tr;

}



int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
}