// 2738_A-unBreathing.cpp
//
#include <bits/stdc++.h>
using namespace std;
int n, cnt;
string s[110];

string solve() {
  cnt = 0;
  for(int i = 0; i < n; ++i) {
    if(s[i] == "A") cnt++;
    if(s[i] == "Un") cnt--;

    if(cnt < 0) return "NO";
  }
  return cnt == 0 ? "YES" : "NO";
}

int main() {
  cin >> n;
  for(int i = 0; i < n; ++i) cin >> s[i];
  cout << solve() << endl;
  return 0;
}
