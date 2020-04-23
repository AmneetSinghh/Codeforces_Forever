#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int count=0;
	int n;cin>>n; 
	int a[n+1];
	int hash[100005*2+5]={0};
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(hash[a[i]]==0){
		++count;
		}
		hash[a[i]]++;
	}
	
	int mx=0;
	for(int i=1;i<=100005*2;i++)
	{
		if(hash[i])
		{
			if(count>hash[i])
			mx=max(mx,hash[i]);
			else if(count==hash[i])
			mx=max(mx,hash[i]-1);
			else
			mx=max(mx,count);
			
		}
	}
	cout<<mx<<endl;
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
	
}
