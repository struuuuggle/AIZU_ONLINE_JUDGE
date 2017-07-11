//途中
#include <iostream>
#include <cmath>
#define Y 1000000007
using namespace std;
int main() {
  long long r;
  int i, m, n, a, x = 6, b;
  cin >> m >> n;
  a = n / x;
  b = n % x;
  r = pow(m, b);
  for(i = 0; i < a; i++) {
	r += pow(m, x);
	while (r > Y) {
	  r -= Y;
	}
  }
  cout << r << endl;
  return 0;
}
