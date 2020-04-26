#include<bits/stdc++.h>
using namespace std;
const int M=2020;
string d[10]={"1110111", "0010010", "1011101", "1011011", "0111010", "1101011", "1101111", "1010010", "1111111", "1111011"};
bool dp[M][M];
int up[M][M],n,k;
vector<pair<int,int> >v[M];
string a[M];
bool sub(string x,string y)
{
  for(int i=0;i<x.size();i++)
    if(y[i]=='0' && x[i]=='1')
      return 0;
  return 1;
}
int da(string x,string y)
{
  int ret=0;
  for(int i=0;i<x.size();i++)
    if(x[i]=='1' && y[i]=='0')
      ret++;
  return ret;
}
int main()
{
  cin>>n>>k;
  for(int i=1;i<=n;i++)
    {
      cin>>a[i];
     for(int j=0;j<10;j++)
		if(sub(a[i],d[j]))
		v[i].push_back({j,da(d[j],a[i])});
    }
  dp[n+1][0]=1;
  for(int i=n;i>=1;i--)
    for(int j=0;j<=k;j++)
      for(auto p:v[i])
	if(j>=p.second && dp[i+1][j-p.second])
	  dp[i][j]=1,up[i][j]=p.first;
	  

	  
  if(!dp[1][k]){
  cout<<"-1";}
  else
  {
  	int x=1,y=k;
	for(int i=1;i<=n;i++)
    	{
    	cout<<up[x][y];
    	y-=da(d[up[x][y]],a[x]);
    	 x++;
    	}
  }
  
}
