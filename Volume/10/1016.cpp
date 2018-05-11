// 1016.cpp
//
#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1000;

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
    if(x==y) return;

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

int main() {
  int v,d;
  while(cin>>v>>d){
    int f[v];
    for(int i=0;i<v;++i){
      if(i==0) f[i]=1+1;
      else if(i==1) f[i]=f[i-1]+1;
      else f[i]=(f[i-1]+f[i-2])%1001;
    }

    UnionFind u(v);
    for(int i=0;i<v-1;++i)
      for(int j=i+1;j<v;++j)
        if(abs(f[i]-f[j])<d) u.unite(i,j);

    int ans=0;
    for(int i=0;i<v;++i)
      if(u.find(i)==i) ans++;
    cout<<ans<<endl;
  }
  return 0;
}
