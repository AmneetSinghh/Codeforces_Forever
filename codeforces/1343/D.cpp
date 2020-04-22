// codeforces bro



// this solution is based on number of 2 replacements, 1 replacemnts and the zero replacement in which
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n,k;
		cin>>n>>k;
		int one_replacement[2*k+4]={0};
		int a[n+4];
		int zero_replacement[2*k+4]={0};
		// two replacement means,,,,   (number of pairs- onereplacement)
		for(int i=1;i<=n;i++)
		cin>>a[i];
		for(int i=1;i<=n/2;i++)
		{
		zero_replacement[a[i]+a[n-i+1]]++;
		one_replacement[min(a[i]+1,a[n-i+1]+1)]++;
		one_replacement[max(a[i]+k+1,a[n-i+1]+k+1)]--;// means that out of range for the one rplacemnet cell, that means in the 2th replacment range
		}
		
		for(int i=2;i<=k*2+1;i++)
		one_replacement[i]+=one_replacement[i-1];
		
		int ans=INT_MAX;
		for(int i=2;i<=k*2+1;i++)
		ans=min(ans,((n/2)-one_replacement[i])*2+one_replacement[i]-zero_replacement[i]);
		
		cout<<ans<<endl;
		
		
		
	
	}
	
	return 0;
}
