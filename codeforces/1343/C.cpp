// codeforces bro

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
	int n;
	cin>>n;
	ll a[n+1];for(int i=1;i<=n;i++)cin>>a[i];
	ll current_p=0;
	ll current_n=-10000000000;
	ll sum=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]>0)
		{
			if(current_n!=-10000000000)
			sum+=current_n;
			current_n=-10000000000;
			current_p=max(a[i],current_p);
			
		}
		else if(a[i]<0)
		{
			if(current_p!=0)
			sum+=current_p;
			current_p=0;
			current_n=max(a[i],current_n);
		}}
		
	if(a[n]>0)
	sum+=current_p;
	else
	sum+=current_n;
	
	cout<<sum<<endl;
	
	}
	
	return 0;
}
