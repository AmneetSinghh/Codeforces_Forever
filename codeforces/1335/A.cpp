#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		ll n;cin>>n;
		if(n==1 || n==2)
		cout<<"0\n";
		else 
		{
			if(n%2==0)
			cout<<(n/2)-1<<endl;
			else cout<<n/2<<endl;
		}
	}
	
}
