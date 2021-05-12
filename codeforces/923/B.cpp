// Don't know when'll I get Blue Color :(   not_stable      //
#include<bits/stdc++.h>
#define int long long
#define ld long double
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 998244353
#define INF 1e18
using namespace std;
#define MAXN   100005
int a[MAXN+12];
int b[MAXN+12];
int dp[MAXN+12]={0};
int pre[MAXN+12]={0};
int n;
// Updates a node in Binary Index Tree (BITree) at given index
// in BITree. The given value 'val' is added to BITree[i] and
// all of its ancestors in tree.
void updateBIT(int BITree[], int n, int index, int val)
{
    // index in BITree[] is 1 more than the index in arr[]
    index = index + 1;
  
    // Traverse all ancestors and add 'val'
    while (index <= n)
    {
        // Add 'val' to current node of BI Tree
        BITree[index] += val;
  
        // Update index to that of parent in update View
        index += index & (-index);
    }
}
  
// Constructs and returns a Binary Indexed Tree for given
// array of size n.
int *constructBITree(int arr[], int n)
{
    // Create and initialize BITree[] as 0
    int *BITree = new int[n+1];
    for (int i=1; i<=n; i++)
        BITree[i] = 0;
  
    // Store the actual values in BITree[] using update()
    for (int i=0; i<n; i++)
        updateBIT(BITree, n, i, arr[i]);
  
    // Uncomment below lines to see contents of BITree[]
    //for (int i=1; i<=n; i++)
    //      cout << BITree[i] << " ";
  
    return BITree;
}
  
// SERVES THE PURPOSE OF getElement()
// Returns sum of arr[0..index]. This function assumes
// that the array is preprocessed and partial sums of
// array elements are stored in BITree[]
int getSum(int BITree[], int index)
{
    int sum = 0; // Iniialize result
  
    // index in BITree[] is 1 more than the index in arr[]
    index = index + 1;
  
    // Traverse ancestors of BITree[index]
    while (index>0)
    {
        // Add current element of BITree to sum
        sum += BITree[index];
  
        // Move index to parent node in getSum View
        index -= index & (-index);
    }
    return sum;
}
  
// Updates such that getElement() gets an increased
// value when queried from l to r.
void update(int BITree[], int l, int r, int n, int val)
{
    // Increase value at 'l' by 'val'
    updateBIT(BITree, n, l, val);
  
    // Decrease value at 'r+1' by 'val'
    updateBIT(BITree, n, r+1, -val);
}


int32_t main() 
{
int t=1;
while(t--){
/* After making logic think for best and easy way of implementation, don't be rush  */

cin>>n;
int arr[MAXN]={0};
int *BITree = constructBITree(arr, MAXN);
for(int i=1;i<=n;i++)cin>>a[i];
vector<int> vc;
for(int i=1;i<=n;i++)cin>>b[i],pre[i]=pre[i-1]+b[i],vc.pb(pre[i]);
sort(vc.begin(),vc.end());

for(int i=1;i<=n;i++)
{
  int lo=lower_bound(vc.begin()+(i-1),vc.end(),a[i]+pre[i-1])-vc.begin();
  if(lo<vc.size())
  {
     dp[lo+1]+=abs(vc[lo]-(a[i]+pre[i-1]));
  }
update(BITree, i, lo+1, MAXN, 1);

}



for(int i=1;i<=n;i++)
{
  int cut=dp[i];
  int get= getSum(BITree,i);
  dp[i]=get*b[i]-cut;
  cout<<dp[i]<<" ";


}
tr;





}}
 