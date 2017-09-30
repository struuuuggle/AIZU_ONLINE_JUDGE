#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  int n;
  long long sum = 0;
  cin >> n;
  vector<int> v1(n);
  for(int i = 0; i < n; ++i) {
	cin >> v1[i];
	sum += v1[i];
  }
  cout << *min_element(v1.begin(), v1.end()) << " ";
  cout << *max_element(v1.begin(), v1.end()) << " ";
  cout << sum << endl;
  return 0;
}
