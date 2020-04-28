#include <bits/stdc++.h>
#define ll long long int 
#define iris 1000000007
using namespace std;

signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;cin>>t;
	while(t--)
	{
		ll n;cin>>n;
		ll a[n*3+1],b[n*3+1];
		for(int i=1;i<=n;i++)
		cin>>a[i]>>b[i];
		for(int i=1;i<=n;i++)
		a[n+i]=a[i],b[n+i]=b[i];
		
		ll mi=9223372036854775807;
		ll hash[3*n]={0};

		for(int i=1;i<=2*n-1;i++)
		{
			hash[i]=a[i+1]-min(a[i+1],b[i]);
			hash[i]+=hash[i-1];
			
			// cout<<i<<"  "<<hash[i]<<endl;
		}
		
		for(int i=1;i<=n;i++)
		{
	    mi=min(mi,a[i]+hash[n-1+(i-1)]-hash[i-1]);
		}
		
		if(n==1)
		{
			cout<<a[1]<<endl;
		}
		else
		cout<<mi<<endl;
	}
	return 0;
}
