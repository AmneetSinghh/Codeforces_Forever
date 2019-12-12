#include <bits/stdc++.h>
using namespace std;
#define io                  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long

int main() 
{

ll n;
cin>>n;
ll a[n+1];
ll in[n+1];
ll out[n+1];
for(int i=1;i<=n;i++)
{
	cin>>a[i];
	in[i]=1;
	out[i]=1;
}
if(n==1)
cout<<"1\n";
else
{
	 for(int i=2;i<=n;i++)
    {
	if(a[i]>a[i-1])
	in[i]=in[i-1]+1;
    }
    
     for(int i=n-1;i>=1;i--)
    {
	if(a[i]<a[i+1])
	out[i]=out[i+1]+1;
    }
    
    
    ll mx=0;
    for(int i=1;i<=n;i++)
    mx=max(in[i],mx);
    
    
    for(int i=2;i<=n-1;i++)
    {
    		if(a[i-1]<a[i+1]){
    		mx=max(mx,in[i-1]+out[i+1]);}

    }
    cout<<mx<<endl;
    
}

	return 0;
}
