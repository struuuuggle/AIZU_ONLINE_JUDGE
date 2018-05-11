// DPL_1_A.cpp
//
#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 10000;

class UnionFind {
public:
  int par[MAX_N];                 // 親
  int rank[MAX_N];                // 木の深さ

  // n要素で初期化
  UnionFind(int n){
    for(int i=0;i<n;++i){
      par[i]=i;
      rank[i]=0;
    }
  }

  // 木の根を求める
  int find(int x){
    if(par[x] == x) return x;
    else return par[x] = find(par[x]);
  }

  // xとyの属する集合を併合
  void unite(int x, int y){
    x = find(x); y = find(y);
    if(x == y) return;

    if(rank[x]<rank[y])
      par[x]=y;
    else {
      par[y]=x;
      if(rank[x]==rank[y]) rank[x]++;
    }
  }

  // xとyが同じ集合に属するか否か
  bool same(int x, int y){
    return find(x) == find(y);
  }
};

int n,q,com,x,y;


int main() {
  cin>>n>>q;
  UnionFind u(n);
  for(int i=0;i<q;++i){
    cin>>com>>x>>y;
    if(com==0) u.unite(x,y);
    else if(com==1) cout<<u.same(x,y)<<endl;
  }
  return 0;
}
