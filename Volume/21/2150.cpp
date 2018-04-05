// 2150.cpp
//
#include <bits/stdc++.h>
using namespace std;
const int MAX_N=110000;
const int MAX_P=100;

bool prime[MAX_N+1];
vector<int> t;
void sieve(){
  fill(prime,prime+MAX_N+1,1);
  prime[0]=prime[1]=0;
  for(int i=2;i<=MAX_N;++i){
    if(prime[i]){
      for(int j=i*2;j<=MAX_N;j+=i){
        prime[j]=0;
      }
      t.push_back(i);
    }
  }
}

int M(int n, int p){
  auto itr=upper_bound(t.begin(),t.end(),n);

  vector<int> sum;
  for(int i=0;i<p;++i)
    for(int j=i;j<p;++j)
      sum.push_back(*(itr+i) + *(itr+j));
  sort(sum.begin(),sum.end());
  return sum[p-1];
}
int main() {
  sieve();

  int n,p;
  while(cin>>n>>p){
    if(n==-1&&p==-1) break;
    cout<<M(n,p)<<endl;
  }
  return 0;
}
