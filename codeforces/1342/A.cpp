#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  int t;cin>>t;while(t--)
  {
  	ll x,y,a,b;
  	cin>>x>>y;
  	  			cin>>a>>b;
  	
  	if(x==0  && y==0)
  	cout<<"0\n";
  	else if(x==0)
  	cout<<a*y<<endl;
  	else if(y==0)
  	cout<<a*x<<endl;
  	else
  	{
  	ll  sum=0;
    if(x>y)
    sum=sum+((x-y)*a)+ b*y;
    else if(y>x)
    sum=sum+((y-x)*a) +  b*x;
    else
    sum=b*x;
    
    
    ll sum2=0;
    sum2=a*x + a*y;
    sum=min(sum2,sum);
    
    cout<<sum<<endl;
  	}
  
    
  }
}
  
