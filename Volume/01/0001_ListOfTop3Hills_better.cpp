#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
  vector<int> a(10);
  
  for(size_t i = 0; i < a.size(); ++i) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  for(int i = 0; i < 3; i++) {
  	cout << a[i] << endl;
  }
  return 0;
}
