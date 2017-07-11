#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main() {
  vector<int> a(10);
  int max;
  size_t idx;
  vector<int>::iterator itr;
  
  for(size_t i = 0; i < a.size(); ++i) {
	cin >> a[i];
  }

  for(int i = 0; i < 3; i++) {
	itr = max_element(a.begin(), a.end());
	idx = distance(a.begin(), itr);
	cout << *max_element(a.begin(), a.end()) << endl;
	a[idx] = 0;
  }
  return 0;
}
