/* not_stable */
/* Practice to Improve */
#include<bits/stdc++.h>
#define int long long
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
#define mod 1000000007
#define inf 1e18
using namespace std; 
const int maxn=100005;

void Not_Stable()
{    

	int n;
	cin>>n;
	int a[n+1];
	std::vector<int>e,o;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)e.pb(a[i]);
		else o.pb(a[i]);
	}
	for(auto sd:o)cout<<sd<<" ";
		for(auto sd:e)cout<<sd<<" ";

			tr;

}
 
 
 
 
int32_t main() {
    io;
   int g=1;
    cin>>g;
    while (g--)Not_Stable();
    return 0;
}