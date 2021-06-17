
// not stable;
#include<bits/stdc++.h>
using namespace std;
const int N=1004;



char s[N][N];
int vis[N][N],dist[N][N];
int spd[N],h[10];
int n,m,p;
bool isValid(int x,int y)
{
    if(x<1 || x>n || y<1 || y>m) return false;
    if(s[x][y]=='#' || vis[x][y]) return false;
    return true;
}
int main()
{
    scanf("%d %d %d",&n,&m,&p);
    int i,j;
    for(i=1;i<=p;i++)
        scanf("%d",&spd[i]);
    for(i=1;i<=n;i++)
        scanf("%s",s[i]+1);
    queue<pair<int,int > >q[10];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(s[i][j]>='1' && s[i][j]<='9')
            {
                int player=(int)(s[i][j]-'0');
                q[player].push(make_pair(i,j));
                vis[i][j]=player;
            }
        }
    }
   int turn=1;




   while(1)
   {
       int f=0;
       for(i=1;i<=p;i++)
       {
           while(!q[i].empty())
           {
               f=1;
               pair<int,int>pq=q[i].front();
               int x=pq.first;
               int y=pq.second;
               int d=dist[x][y];
               if(d<1LL*turn*spd[i])// turn* expand;
               {
                   q[i].pop();
                   if(isValid(x-1,y)){
                       vis[x-1][y]=i;
                       dist[x-1][y]=d+1;
                       q[i].push(make_pair(x-1,y));
                   }
                   if(isValid(x+1,y)){
                       vis[x+1][y]=i;
                       dist[x+1][y]=d+1;
                       q[i].push(make_pair(x+1,y));
                   }
                   if(isValid(x,y-1)){
                       vis[x][y-1]=i;
                       dist[x][y-1]=d+1;
                       q[i].push(make_pair(x,y-1));
                   }
                   if(isValid(x,y+1)){
                       vis[x][y+1]=i;
                       dist[x][y+1]=d+1;
                       q[i].push(make_pair(x,y+1));
                   }
               }
               else break;
           }
       }
       if(!f) break;
       turn++;
   }
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=m;j++)
       {
           if(s[i][j]!='#')
               h[vis[i][j]]++;
       }
   }
   for(i=1;i<=p;i++)
      printf("%d ",h[i]);
   return 0;
}
