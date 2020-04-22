// codeforces bro

#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
	
	int n;
	cin>>n;
	int val=n/2;
	if(val%2==0){
		cout<<"YES\n";
		int sum=0;
		for(int i=1,j=2;i<=val;i++,j+=2)
		{
				cout<<j<<" ";
				sum+=j;
		}
		int sum1=0;
		for(int i=1,j=1;i<=val-1;i++,j+=2)
		{
					cout<<j<<" ";
					sum1+=j;
		}
		cout<<sum-sum1<<"\n";
		
		
	}
	else
	cout<<"NO\n";
	
	
	
	
	
	
	
	
	
	
	
	
	
	}
	
	return 0;
}
