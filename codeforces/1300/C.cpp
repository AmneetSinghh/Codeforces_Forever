//****Code by Harry_Singh  B.tech(CSE)_2022_Passout. ****  
#include<bits/stdc++.h>
#define ll long long
using namespace std;
// **************** Some Cool Observations***************
/*
1.x^0 + x^1 + x^2 + ..x^n < x^n+1
take an example->   same as 2^0<2^1, 2^0+2^1<2^2, 2^0+2^1+2^2<2^3 , 2^0+2^1+2^2+2^3<2^4 
Every x^n power is greater than sum of all prevoius powers of x.
-------------------------------------------------------------------------------------------------------------------------------
*/

int main()
{
	ll n;cin>>n;
	ll a[n+1];
	map<ll,ll> mp;
	ll pre[n+23]={0}, suf[n+23]={0};
	pre[0]=LONG_MAX;
	suf[n+1]=LONG_MAX;
	
	for(ll i=1;i<=n;i++)
	{
	cin>>a[i];
	pre[i]=pre[i-1]& (~a[i]);
	}
	ll mx=-1;
	for(ll i=n;i>=1;i--)
	suf[i]=suf[i+1]&(~a[i]);
	
	ll value=-1;
	for(ll i=1;i<=n;i++)
	{
		if((pre[i-1]&a[i]&suf[i+1])>=mx){mx=pre[i-1]&a[i]&suf[i+1];value=a[i];}
	}
	if(value!=-1)
	cout<<value<<" ";
	int flag=0;
	for(ll i=1;i<=n;i++)
	{
		if(a[i]==value && flag==1)cout<<a[i]<<" ";
		if(a[i]==value)flag=1;
		
		if(a[i]!=value)
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

