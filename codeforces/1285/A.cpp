#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int left=0,right=0;
	for(int i=0;i<s.length();i++){
	if(s[i]=='L')
	left++;
	else
	right++;}
	cout<<left+right+1<<endl;
	return 0;
}
