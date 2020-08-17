#include<bits/stdc++.h>
using namespace std;
 
int pre[200010],dp[200010],ans[200010];
pair<int,int> a[200010];
int main(){
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].first;
		a[i].second=i;
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
		dp[i]=1e9;
	dp[0]=0;
	for(int i=1;i<=n;i++)
		for(int j=3;j<=5;j++)
			if(i-j>=0&&dp[i]>dp[i-j]+a[i].first-a[i-j+1].first){
				dp[i]=dp[i-j]+a[i].first-a[i-j+1].first;
				pre[i]=i-j;
			}
	int team=0;
	int i=n;
	while(i>=1){
		team++;
		for(int j=i;j>pre[i];j--)
			ans[a[j].second]=team;

		i=pre[i];
	}
	cout<<dp[n]<<' '<<team<<endl;
	for(int i=1;i<=n;i++)
		cout<<ans[i]<<' ';
	cout<<endl;
}