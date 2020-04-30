#include <bits/stdc++.h>
using namespace std;

int main() 
{
int t;cin>>t;while(t--){
int n,k;cin>>n>>k;
string s;
cin>>s;
	int first=1,second=s.length(),count=0;;
	
	int check[s.length()+3]={0};
	while(true)//                              wudixiaoxingxingheclp
	{
		if(s.length()%2==0)
		{
			if(first>second)
			break;
		}
		else
		{
			if(second==first)
			break;
		}
		
		int i=first;
		int mx=-1;
		int hash[28]={0};
		int c=0;
		while(i<=s.length())
		{
			if(check[i])
			break;
			int value=(int)s[i-1];
			hash[value-97]++;
			// max calculate
			if(mx<hash[value-97])
			mx=hash[value-97];
			++c;
			check[i]++;
			i+=k;
		}
		i=second;
		
		while(i>=1)
		{
			if(check[i])
			break;
			int value=(int)s[i-1];
			hash[value-97]++;
			if(mx<hash[value-97])
			mx=hash[value-97];
			++c;
			check[i]++;
			i-=k;
		}
		
		
		++first;--second;
		if(c!=0 && mx!=-1)
		count=count+ (c-mx);
		
		// cout<<count<<endl;
		
		
	}
	
	
	cout<<count<<endl;
 



}



}
