#include <bits/stdc++.h>

using namespace std;

int main() 
{
int n,m,k;
cin>>n>>m>>k;
int a,b;
for(int i=1;i<=k*2;i++)
cin>>a>>b;


int count;
vector<char> vc;
for(int i=1;i<=m-1;i++){
vc.push_back('L');
count++;}
for(int i=1;i<=n-1;i++){
vc.push_back('U');count++;}

int flag=0;
for(int i=1;i<=n;i++)
{
	if(flag==0)
	{

	for(int j=1+1;j<=m;j++){
	vc.push_back('R');
	count++;}
	
	if(i+1<=n){
	vc.push_back('D');count++;}
	
	flag=1;
	}
	else
	{
		
	for(int j=m-1;j>=1;j--){
	vc.push_back('L');count++;}
	
	if(i+1<=n){
	vc.push_back('D');count++;}
	
	flag=0;

	}

	

	
}

cout<<vc.size()<<endl;
for(auto sd:vc)cout<<sd;
cout<<endl;


	return 0;
}
