#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;
int main()
{
	io;
	int t;cin>>t;
	while(t--)
	{
	ll n,k;
	cin>>n>>k;
	ll a[n+1];
	ll hash[2*100005]={0};
	for(ll i=1;i<=n;i++)
	cin>>a[i];
	
	for(ll i=2;i<=n-1;i++)
	{
		if(a[i]>a[i-1] && a[i]>a[i+1])
		hash[i]++;
	}
	
	for(ll i=1;i<=n;i++)
	hash[i]+=hash[i-1];
	

	
	ll l=0,kk=0;
	ll index=1;
	ll mx=0;
    for(int i=1;i<=n;i++)
    {
    	l=i;
    	kk=l+k-1;
    	if(kk>n)break;
    	ll sum=hash[kk-1]-hash[l];
    	if(sum>mx)
    	{
    		mx=sum;
    		index=l;
    	}
    	
    }
    
    cout<<mx+1<<" "<<index<<"\n";
	
}
}
