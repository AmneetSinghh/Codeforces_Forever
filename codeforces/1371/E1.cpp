#include<bits/stdc++.h>
using namespace std;
int a[100100];
int main(){
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("opc.txt","w",stdout);
#endif


	int n,p,ans1=0,ans2=2e9;cin>>n>>p;
	for(int i=1;i<=n;i++)scanf("%lld",a+i);
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		ans1=max(ans1,a[i]-i+1);
		if(i>=p)ans2=min(ans2,a[i]-i+p);
	}
	cout<<max(ans2-ans1,0)<<endl;
	for(int i=ans1;i<ans2;i++)printf("%d ",i);
	return 0;
}