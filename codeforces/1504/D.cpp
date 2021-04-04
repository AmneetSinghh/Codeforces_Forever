#include<bits/stdc++.h>
#define int long long
#define tr cout<<"\n";
#define pb push_back
#define iPair pair<int,pair<int,int>>
#define INF 10000000000009
using namespace std;
const int maxn=100005;
int32_t main() {
int n,val;cin>>n;
vector<pair<int,int>> one,two;
for(int i=1;i<=n;i++)
{
	for(int j=1;j<=n;j++)
	{
		if(i%2==1)
		{
			if(j%2)one.pb({i,j});
			else two.pb({i,j});
		}
		else
		{
			if(j%2)two.pb({i,j});
			else one.pb({i,j});
		}
	}
}

int i=0,j=0,fr=0,sr=0;
cin>>val;
if(val==1)fr=2;
else fr=1;
cout<<fr<<" "<<one[i].first<<" "<<one[i].second<<endl;
++i;


for(int k=2;k<=n*n;k++)
{
  cin>>val;
  if(val!=fr)
  {
  	if(i<one.size())
  	{
   	cout<<fr<<" "<<one[i].first<<" "<<one[i].second<<endl;
    ++i; 		
   }
   else{
       // one is empty;
   	int flag;
   	if(2!=val && 2!=fr)flag=2;
   	else if(1!=val && 1!=fr)flag=1;
   	else flag=3;
    cout<<flag<<" "<<two[j].first<<" "<<two[j].second<<endl;
    ++j;			
   }

  }
  else
  {
  	if(fr==1)sr=2;
  	else sr=1;
  	if(j<two.size())
  	{
    	cout<<sr<<" "<<two[j].first<<" "<<two[j].second<<endl;
    ++j;		
  	}
  	else
  	{
   	int flag;
   	if(2!=val && 2!=sr)flag=2;
   	else if(1!=val && 1!=sr)flag=1;
   	else flag=3;
    cout<<flag<<" "<<one[i].first<<" "<<one[i].second<<endl;
    ++i; 
  	}

  }
}





}