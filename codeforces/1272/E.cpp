#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>  graph[300005];
int dis[300005]={0};

vector<ll> vc;
ll c=0;

int main()
{
 ll n;cin>>n;
 ll a[n+1];
 ll first,second;
 for(int i=1;i<=n;i++)
 {
 	dis[i]=-1;
 	 cin>>a[i];
 	 first=i-a[i];
 	 second=i+a[i];
 	 if(first>=1)
 	 graph[first].push_back(i);
 	 if(second<=n)
 	 graph[second].push_back(i);
 	 
 	 // jehde jehde true t ana chande bro
 	 
 }
 
 

 queue<ll> q;
 // all the distance baale bro
 for(ll l=1;l<=n;l++)
 {
 	if(l+a[l]<=n)
 	{
 		
 	if(a[l]%2==0 && a[a[l]+l]%2!=0){
 	dis[l]=1;q.push(l);}
 	else if(a[l]%2!=0 && a[a[l]+l]%2==0){
 	dis[l]=1;q.push(l);}
 	
 	}
 	
 	 if(l-a[l]>=1)
 	{
 		
 	if(a[l]%2==0 && a[l-a[l]]%2!=0){
 	dis[l]=1;q.push(l);}
 	else if(a[l]%2!=0 && a[l-a[l]]%2==0){
 	dis[l]=1;q.push(l);}
 	}
 
 }
 
 
 
 while(!q.empty())
 {
 	ll u=q.front();
 	q.pop();
 	for(ll i=0;i<graph[u].size();i++)
 	{
 		ll child=graph[u][i];
 		if(dis[child]==-1)
 		{
 			dis[child]=dis[u]+1;
 			q.push(child);
 		}
 	}
 }
 for(int i=1;i<=n;i++)
 cout<<dis[i]<<" ";
 cout<<endl;
 }





