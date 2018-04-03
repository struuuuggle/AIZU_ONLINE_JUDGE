// DPL_1_A.cpp
//
#include <bits/stdc++.h>
using namespace std;
const int INF=INT_MAX;
int n,m;
int dp[50001],coin[20];
int solve() {
  fill(dp,dp+n+1,INF);
  dp[0]=0;
  for(int i=0;i<n;++i)
    for(int j=0;j<m;++j)
      if(i+coin[j]<=n)
        dp[i+coin[j]]=min(dp[i+coin[j]],dp[i]+1);
  return dp[n];
}
int main() {
  cin>>n>>m;
  for(int i=0;i<m;++i)cin>>coin[i];
  cout<<solve()<<endl;;
  return 0;
}
