// DPL_1_B.cpp
// 0-1ナップサック問題
#include <bits/stdc++.h>
using namespace std;

const int MAX_N=100, MAX_W=10000;
int dp[MAX_N+1][MAX_W+1];
int v[MAX_N],w[MAX_N];

int solve(int N, int W){
  fill(&dp[0][0],&dp[MAX_N+1][0],0);

  for(int i=0;i<N;++i){
    for(int j=0;j<=W;++j){
      if(j<w[i]) dp[i+1][j]=dp[i][j];
      else dp[i+1][j]=max(dp[i][j],dp[i][j-w[i]]+v[i]);
    }
  }
  return dp[N][W];
}

int main() {
  int N,W;
  cin>>N>>W;
  for(int i=0;i<N;++i)
    cin>>v[i]>>w[i];
  cout<<solve(N,W)<<endl;
  return 0;
}
