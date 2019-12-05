#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;while(t--)
	{
		string s;
		cin>>s;
		int flag=0;
		for(int i=0;i<s.length()-1;i++)
		{
			if(s[i]==s[i+1] && s[i]!='?')
			{
			flag=1;break;}
			
		}
		if(flag==1)
		cout<<"-1\n";
		else if(s.length()==1)
		{
			if(s[0]=='?')
			cout<<"a\n";
			else
			cout<<s<<endl;
		}
		else
		{
			int n=s.length();
			for(int i=0;i<n;i++)
			{
				if(s[i]=='?' && i==0)
				{
					if(s[i+1]=='a')
					s[i]='b';
					else if(s[i+1]=='b')
					s[i]='c';
					else
					s[i]='a';
				}
				else if(s[i]=='?' && i==s.length()-1)
				{
					if(s[i-1]=='a')
					s[i]='b';
					else if(s[i-1]=='b')
					s[i]='c';
					else
					s[i]='a';
				}
				else if(s[i]=='?')
				{
					if(s[i+1]=='?')
					{
						if(s[i-1]=='a')
					s[i]='b';
					else if(s[i-1]=='b')
					s[i]='c';
					else
					s[i]='a';
					}
					else
					{
					if((s[i-1]=='a' && s[i+1]=='b'  ) || ((s[i-1]=='b' && s[i+1]=='a'  )) || (s[i-1]=='a' && s[i+1]=='a'  ) || ((s[i-1]=='b' && s[i+1]=='b'  )) )
					s[i]='c';
					else if((s[i-1]=='b' && s[i+1]=='c'  ) || ((s[i-1]=='c' && s[i+1]=='b'  )) || (s[i-1]=='b' && s[i+1]=='b'  ) || ((s[i-1]=='c' && s[i+1]=='c'  )))
					s[i]='a';
					else
					s[i]='b';
					}
				}
			}
			int flag=0;
			for(int i=0;i<s.length()-1;i++)
			{
			if(s[i]==s[i+1]){
			flag=1;break;}
			}
			if(flag==0)
			cout<<s<<endl;
			else cout<<"-1\n";
		}
	}
	return 0;
}
