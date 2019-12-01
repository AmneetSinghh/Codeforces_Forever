#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll p[n+1];
	for(ll i=1;i<=n;i++)
	cin>>p[i];
	ll a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	ll hash[6]={0};
	ll left=0;
	for(int i=1;i<=n;i++)
	{
		left+=p[i];
		
		if(left>=e){
		hash[5]+=(left/e);
		left=(left%e);}
		
		if(left>=d){
		hash[4]+=(left/d);
		left=(left%d);}
		
		if(left>=c){
		hash[3]+=(left/c);
		left=(left%c);}
		
		if(left>=b){
		hash[2]+=(left/b);
		left=(left%b);}
		
		if(left>=a)
		{
		hash[1]+=(left/a);
		left=(left%a);}
		
	}
	cout<<hash[1]<<" "<<hash[2]<<" "<<hash[3]<<" "<<hash[4]<<" "<<hash[5]<<endl;
	cout<<left<<endl;
}
