#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	int t;cin>>t;while(t--)
	{
		int n;
		cin>>n;
		int a[n+3];
		for(int i=1;i<=n;i++)
		cin>>a[i];
		int current=1;
		
		
		int flag=1;
		int ind=-1;
		int count=0;
		for(int i=n-1;i>=1;i--)
		{
			if(a[i]==a[i+1])
			{
			if(count==0)
			ind=i+1;// this means find the indexes
			++count;
			}
		}
		
		// all same case
		if(count==n-1)
		{
			cout<<"1\n";
			for(int i=1;i<=n;i++)
			cout<<"1 ";
			cout<<endl;
			continue;
		}
		
		
		
		int hash[n+3]={0};
		int hash1[n+3]={0};
		hash[1]=1;
		hash1[1]=1;
		hash[0]=1;
		a[0]=a[1];
		for(int i=1;i<=n-1;i++)
		{
			
			if(a[i]!=a[i-1]){
			if(current==1)
			hash[i]=2,current=2;
			else 
			hash[i]=1,current=1;
			}
			else 	
			hash[i]=current;
			
		}
		
		
		if(ind!=-1)
		{
			int current1=1;
			for(int i=2;i<=ind-1;i++)
			{
				if(a[i]!=a[i-1]){
			if(current1==1)
			hash1[i]=2,current1=2;
			else 
			hash1[i]=1,current1=1;
			}
			else 	
			hash1[i]=current1;
			}
			
			if(current1==1)
			current1=2; else current1=1;
			hash1[ind]=current1;
			
			for(int i=ind+1;i<=n;i++)
			{
					if(a[i]!=a[i-1]){
			if(current1==1)
			hash1[i]=2,current1=2;
			else 
			hash1[i]=1,current1=1;
			}
			else 	
			hash1[i]=current1;
			}
			
			
		}
	
	
	
			if(a[n]!=a[1]  && a[n]!=a[n-1])
			{
				if(current==1)current=2;else current=1;
					
								hash[n]=current;
								
			if(hash[n-1]!=hash[n] && hash[n]!=hash[1])
			{
				cout<<"2\n";
							for(int i=1;i<=n;i++)
							cout<<hash[i]<<" ";
							cout<<endl;
			}
			else if(ind!=-1)
			{
				if(hash1[n-1]!=hash1[n] && hash1[n]!=hash1[1])
				{
							cout<<"2\n";
							for(int i=1;i<=n;i++)
							cout<<hash1[i]<<" ";
							cout<<endl;
				}
			}
		    
			else
			{
				cout<<"3\n";
				hash[n]=3;
					for(int i=1;i<=n;i++)
			cout<<hash[i]<<" ";
			cout<<endl;
			}
		
				
			}
			else
			{
				
				if(a[n-1]==a[n] && a[n]==a[1])
				{
				cout<<"2\n";
				hash[n]=current;
				for(int i=1;i<=n;i++)
				cout<<hash[i]<<" ";
				cout<<endl;
				}
				
				else if(a[n-1]==a[n] && a[n]!=a[1])
				{	cout<<"2\n";
					if(current==2)
					{
					hash[n]=current;
					for(int i=1;i<=n;i++)
					cout<<hash[i]<<" ";
					cout<<endl;
					}
					else
					{		for(int i=1;i<=n;i++)
							cout<<hash1[i]<<" ";
							cout<<endl;
					}
				}
				else if(a[n-1]!=a[n] && a[n]==a[1])
				{
					if(current==2)
					current=1;
					else
					current=2;
					
					cout<<"2\n";
					hash[n]=current;
					for(int i=1;i<=n;i++)
					cout<<hash[i]<<" ";
					cout<<endl;
					
				}
			}
		}
		
		
	
	return 0;
}
