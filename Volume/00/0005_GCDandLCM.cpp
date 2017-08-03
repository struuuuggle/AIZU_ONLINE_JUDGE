#include <iostream>
#include <algorithm>
using namespace std;
long long int gcd(long long int a,long long int b) {
  if (a % b == 0) return b;
  else return gcd(b, a % b);
}

long long int lcm(long long int a, long long int b) {
  return (a * b) / gcd(a, b);
}

int main() {
  long long int a, b;
	while(cin >> a >> b) {
	  cout << gcd(a, b) << " " << lcm(a, b) << endl;
	}
  return 0;
}
