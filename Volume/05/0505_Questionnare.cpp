#include <iostream>
#include <vector>
#include <algorithm>
#define MAX_N 1000
#define MAX_M 100
using namespace std;

int n, m;
int a[MAX_N][MAX_M];

int main() {
  while(cin >> n >> m && n && m) {
    vector<int> v(m);
    for(int i = 0; i < n; ++i) {
      for(int j = 0; j < m; ++j) {
        cin >> a[i][j];
        v[j] += a[i][j];
      }
    }
    
    for(int i = 0; i < m; ++i) {
      auto idx = distance(v.begin(), max_element(v.begin(), v.end()));
      cout << idx + 1;
      cout << (i < m - 1 ? ' ' : '\n');
      v[idx] = 0;
    }
  }
  return 0;
}
