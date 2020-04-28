#include <bits/stdc++.h>
#define iris 1000000007
using namespace std;

signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

		int n,k;cin>>n>>k;
		int a[n+1],f[k+1];
		int suf[2*100001]={0};
		int mx=0;
		
	
		for(int i=1;i<=n;i++)
		{
		cin>>a[i];
	    suf[a[i]]++;
		mx=max(a[i],mx);
		}
		sort(a+1,a+n+1,greater<int>());
		for(int i=1;i<=k;i++)
		cin>>f[i];
		
		for(int i=mx;i>=1;i--)
		suf[i]+=suf[i+1];
		
		
		
		
		
		int ans=0;
		for(int i=1;i<=k;i++)
			ans=max(ans,(suf[i]/f[i])+((suf[i]%f[i])>0?1:0));
		
		
		vector<int> res[ans+3];
		for(int i=1;i<=n;i++)
		res[i%ans].push_back(a[i]);
		
		
		printf("%d\n", ans);
	for(int i=0;i<ans;i++){
		printf("%d", int(res[i].size()));
		for (auto it : res[i])
			printf(" %d", it);
		puts("");
	}
		
		
		
		
	
	
	return 0;
}
