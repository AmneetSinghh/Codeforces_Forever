#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> mx,mi;
int main() {
	int n;
	scanf("%d",&n);
	for(int i=0,k,x;i<n;i++) 
	{
		scanf("%d",&k);
		int la=1e9,maxx=0,minn=1e9;
		bool f=false;
		for(int j=0;j<k;j++) 
		{
			scanf("%d",&x);
			if(x>la) f=true;
			la=x;
			maxx=max(maxx,x);
			minn=min(minn,x);
			///cout<<maxx<<"  "<<minn<<"  "<<la<<"  "<<f<<endl;
		}
		if(!f) 
		mx.push_back(maxx),mi.push_back(minn);// we use the min-max,   for the things which dont have the ascent
		
	}
	int t=mx.size();
	ll ans=((1LL*n*n)-(1LL*t*t));
	sort(mx.begin(),mx.end());
	for(auto v:mi) 
	{
		ans+=t-(upper_bound(mx.begin(),mx.end(),v)-mx.begin());
	}
	printf("%lld\n",ans);
	return 0;
}
