#include <bits/stdc++.h>
#define ll long long
#define iris 1000000007
using namespace std;

signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;cin>>t;while(t--)
	{
		ll n;cin>>n;
		ll a[n+1];
		for(int i=1;i<=n;i++)cin>>a[i];
		
		ll count=0;
		ll mx=0;
		for(int i=2;i<=n;i++)
		{
			if(a[i]>=a[i-1])
			continue;
			else
			{
				// cout<<i<<endl;
			    ll index=0;
			    ll sum=abs(a[i]-a[i-1]);
			    a[i]=a[i]+ sum;
			    ll val=0;
			    while(val<sum)
			    {
			    	val+=pow(2,index);
			    	++index;
			    }
			    mx=max(index,mx);
			    
			}
		}
		cout<<mx<<endl;
	}
		
	
	
	return 0;
}
