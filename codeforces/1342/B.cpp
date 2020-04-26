#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  int t;cin>>t;while(t--)
  {
  	string s;
  	cin>>s;
  	int z=0,o=0;
  	for(int i=0;i<s.length();i++)
  	{
  		if(s[i]=='0')z++;
  		else o++;
  	}
  	if(z==0 || o==0)
  	cout<<s<<endl;
  	else
  	{
  		if(z>o)
  		{
  			for(int i=1;i<=s.length()*2;i++)
  			{
  				if(i%2==1)
  				cout<<"0";
  				else cout<<"1";
  			}
  			cout<<endl;
  		}
  		else
  		{
  			for(int i=1;i<=s.length()*2;i++)
  			{
  				if(i%2==1)
  				cout<<"1";
  				else cout<<"0";
  			}
  			cout<<endl;
  		}
  	}
  	
    
  }
}
  
