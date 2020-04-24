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
	
	ll n;cin>>n;
	ll a[n+1];
		ll covered[100005]={0};
	int flag=0;
	ll hash[100005]={0};

	for(int i=1;i<=n;i++)
	{
	cin>>a[i];
	hash[a[i]]+=i;
	}
	
	
	for(int i=1;i<=n;i++)
	{
		if(covered[i]!=0)
		break;

		ll pos=hash[i];
		ll j=pos+1;
		ll itr=i+1;
		covered[pos]+=1;

		for(int k=j;k<=n;k++)
		{
			if(covered[k]!=0)
			break;
			
			if(a[k]==itr)
			{
				itr++;
				covered[k]+=1;
			}
			else
			{
			flag=1
			;break;}
		}
		if(flag==1)
		break;
	}
	if(flag==1)
	cout<<"No\n"; else cout<<"Yes\n";
	
	
	
}
}
