// 2745_CurryMaking.cpp
//
#include <bits/stdc++.h>
using namespace std;
int r0, w0, c, r, nr;
int main() {
  while(cin >> r0 >> w0 >> c >> r && r0 && w0 && c && r) {
    for(int i = 0;; ++i) {
      nr = r0 + i*r;
      if(nr / w0 >= c) {
        cout << i << endl;
        break;
      }
    }
  }
  return 0;
}
