// 2508.cpp
//
#include <bits/stdc++.h>
using namespace std;
const int MAX_N=100;
int k[MAX_N], n;
char a[52];
string s;

void solve(){
  int L=s.length();
  for(int i=0;i<L;++i){
    int x;
    for(int j=0;j<52;++j){
      if(s[i]==a[j]){
        x=j-k[i%n];

        if(x<0) x+=52;
        else if(x>=52) x-=52;

      }
    }
    cout<<a[x];
  }
  cout<<endl;
}
int main() {
  for(int i=0;i<52;++i){
    if(i<26)a[i]='a'+i;
    else a[i]='A'+i-26;
  }

  while(cin>>n,n){
    for(int i=0;i<n;++i)cin>>k[i];
    cin>>s;
    solve();
  }
  return 0;
}
