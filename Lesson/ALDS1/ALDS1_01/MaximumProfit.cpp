#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, max, min, buf;
  cin >> n;
  vector<int> v1(n);
  for(int i = 0; i < n; ++i) {
	cin >> buf;
	v1[i] = buf;
	
	if(i == 0) {
	  min = v1[i];
	}

	if(i == 1) {
	  max = v1[i] - v1[i - 1];
	}
	
	max = max > (v1[i] - min) ? max : v1[i] - min;
	min = min < v1[i] ? min : v1[i];
  }
  cout << max << endl;
  return 0;
}
