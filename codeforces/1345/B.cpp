#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define io  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define dl long double
int main()
{
io;int t;cin>>t;while(t--){
	
	ll n;cin>>n;
	ll hash[100001]={0};
	hash[0]=2;
	for(int i=1;i<=100000;i++)
	hash[i]=hash[i-1]+((i+1)*2)+i;
	
	
	ll count=0;
    for(ll i=25819;i>=0;i--)
    {
    	if(hash[i]<=n)
    	{
    		count=count+(n/hash[i]);
    		n=n%hash[i];
    	}
    }
    cout<<count<<endl;
}}


