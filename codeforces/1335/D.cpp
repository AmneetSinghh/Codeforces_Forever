#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
	int a[11][11];
	string st;
	vector<string> s;
	s.push_back("start");
	for(int i=1;i<=9;i++)
	{
	cin>>st;
	s.push_back(st);
	}
	
	
	
	
	s[1][1]=s[1][0];
	s[2][4]=s[2][3];
	s[3][7]=s[3][6];
	
	s[4][2]=s[4][1];
	s[5][5]=s[5][4];
	s[6][8]=s[6][7];
	
	s[7][0]=s[7][2];
	s[8][3]=s[8][5];
	s[9][6]=s[9][8];
	
	for(int i=1;i<s.size();i++)
	cout<<s[i]<<endl;
	

	
	
	

		
	}
	
}
