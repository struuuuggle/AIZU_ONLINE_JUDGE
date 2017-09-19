#include <iostream>
using namespace std;

int c[8] = {0, 1, 2, 3, 5, 7, 8, 9};
void solve(int n) {
  if(n >= 8) solve(n / 8);
  cout << c[n % 8];
}
int main() {
  int n;
  while(cin >> n, n) {
	solve(n);
	cout << "\n";
  }
  return 0;
}
