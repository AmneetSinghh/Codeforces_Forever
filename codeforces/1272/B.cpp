#include<bits/stdc++.h>
using namespace std;
 
long long l,u,r,d,q;
string s;
 
int main(){
 
	cin>>q;
 
	while(q--){
		cin>>s;
		l=r=u=d=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='L')l++;
			if(s[i]=='D')d++;
			if(s[i]=='U')u++;
			if(s[i]=='R')r++;
		}
 
		l=r=min(l,r);
		u=d=min(u,d);
 
		if(u==0)l=r=min(1ll,l);
		if(l==0)u=d=min(1ll,u);
 
		cout<<l+d+u+r<<"\n";
		for(int i=0;i<l;i++)cout<<"L";
		for(int i=0;i<u;i++)cout<<"U";
		for(int i=0;i<r;i++)cout<<"R";
		for(int i=0;i<d;i++)cout<<"D";
		cout<<"\n";
	}
 
	return 0;
}
