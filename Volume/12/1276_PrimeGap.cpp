#include <iostream>
#define MAX_N 1299709 + 1
using namespace std;

bool t[MAX_N];
int k;

bool isPrime(int x) {
  if(x == 2) return true;
  if(x < 2 || x % 2 == 0) return false;
  int i = 3;
  while(i * i <= x) {
    if(x % i == 0) return false;
    i += 2;
  }
  return true;
}

void table() {
  for(int i = 1; i < MAX_N; ++i) {
    if (isPrime(i)) t[i] = 1;
  }
}

void solve() {
  int p = k, n = k;
  while(t[p] != 1) p--;
  while(t[n] != 1) n++;
  cout << n - p << endl;
}

int main() {
  table();
  while(cin >> k && k) {
    solve();
  }
  return 0;
}
