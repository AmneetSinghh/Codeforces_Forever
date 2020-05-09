#include <bits/stdc++.h>
#define ll long long
#define fast_cin ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main() {
fast_cin;int t;cin >> t;while (t--) {
	ll n;cin>>n;
	string s=to_string(n);
	ll len=s.length();
	int f=0;
	--len;
	
	vector<string> vc;
	
	for(int i=0;i<s.length();i++)
	{
	string ss="";
	if(s[i]=='0'){	--len;continue;}
	ss+=s[i];
	for(int j=0;j<len;j++)
	ss+='0';
	--len;
	
	if(s!="")vc.push_back(ss);
	}
	cout<<vc.size()<<endl;
	for(auto sd:vc)cout<<sd<<" ";
	cout<<endl;
		
		
	
}}
