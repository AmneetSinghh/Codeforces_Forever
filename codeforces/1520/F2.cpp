// Either up or down pracice never ends  :not_stable      //
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 1000000007
#define INF 1e18
using namespace std;
#define MAXN   200005
 
int ask(int mid){
  cout << "? " << 1 << " " << mid << endl;
  int val;
  cin>>val;
  return val;
}
 
// useage of BIT
int getSum(int BITree[], int index)
{
    int sum = 0; // Initialize result
      index = index + 1;
      while (index>0)
    {
        sum += BITree[index];
          index -= index & (-index);
    }
    return sum;
}
 
void updateBIT(int BITree[], int n, int index, int val)
{
    index = index + 1;
      while (index <= n)
    {
        BITree[index] += val;
          index += index & (-index);
    }
}
  
int sum(int x, int BITTree1[], int BITTree2[])
{
    return (getSum(BITTree1, x) * x) - getSum(BITTree2, x);
}
 
  
void updateRange(int BITTree1[], int BITTree2[], int n,
                 int val, int l, int r)
{
 
    updateBIT(BITTree1,n,l,val);
    updateBIT(BITTree1,n,r+1,-val);
  
    // Update BIT2
    updateBIT(BITTree2,n,l,val*(l-1));
    updateBIT(BITTree2,n,r+1,-val*r);
}
  
int rangeSum(int l, int r, int BITTree1[], int BITTree2[])
{
    return sum(r, BITTree1, BITTree2) -
           sum(l-1, BITTree1, BITTree2);
}
  
int *constructBITree(int n)
{
    // Create and initialize BITree[] as 0
    int *BITree = new int[n+1];
    for (int i=1; i<=n; i++)
        BITree[i] = 0;
  
    return BITree;
}
 
 
int32_t main() 
{
int t=1;
// cin>>t;
while(t--){
 
 
int n,k,t;
cin>>n>>t;
    // Construct two BIT
int *BITTree1, *BITTree2;
BITTree1 = constructBITree(n+1);
BITTree2 = constructBITree(n+1);
unordered_map<int,int> hash;// for frequencies for the future use;
 
int vis[n+1]={0};
while(t--){
cin>>k;
// cout<<"current-> "<<k;tr;
 
int l=1,r=n,ans=1;
while(l<=r)
{
    int mid=(l+r)/2;
    if(vis[mid]==1)
    {
      int add=rangeSum(1,mid,BITTree1,BITTree2); 
      int get=hash[mid]+add;
      // cout<<mid<<" "<<get<<" Saved this-> "<<add<<" "<<hash[mid];tr;
      if(mid-get>=k){
      ans=mid;// this means, we hae at least this onees;
      r=mid-1;
     }
     else l=mid+1;
    }
    else
    {
     int get=ask(mid);
     // cout<<mid<<" "<<get<<" Saved this-> ";tr;
     vis[mid]=1;
     int add=rangeSum(1,mid,BITTree1,BITTree2); 
     hash[mid]=get-add;// because next time if it comes. we can use this.
     if(mid-get>=k){
      ans=mid;// this means, we hae at least this onees;
      r=mid-1;
     }
     else l=mid+1;    
    }
}
 
cout << "! " << ans << endl;
updateRange(BITTree1,BITTree2,n,1,ans,ans);// ans to ans push one;
 
}
 
 
 
 
}
}