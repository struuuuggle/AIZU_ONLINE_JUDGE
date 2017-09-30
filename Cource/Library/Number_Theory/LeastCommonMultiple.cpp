#include <iostream>
#include <vector>
using namespace std;

int gcd(int a,int b) {
  if (a % b == 0) return b;
  else return gcd(b, a % b);
}

int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}

int main() {
  int n;
  cin >> n;
  vector<int> v1(n);
  for(int i = 0; i < n; ++i) {
	cin >> v1[i];
  }

  int ans;
  for(int j = 1; j < n; ++j) {
	if(j == 1) ans = lcm(v1[j - 1], v1[j]);
	else {
	  ans = lcm(ans, v1[j]);
	}
  }
  cout << ans << endl;
  return 0;
}
