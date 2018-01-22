#include <iostream>
using namespace std;
bool isPrime(int x) {
  if(x == 2) return true;

  if(x < 2 || x % 2 == 0) return false;

  int i = 3;
  while(i * i<= x) {
	if(x % i == 0) return false;
	i += 2;
  }
  return true;
}
int main() {
  int i, n, num, cnt = 0;
  cin >> n;
  for(i = 0; i < n; i++) {
	cin >> num;
	if(isPrime(num)) cnt++;
  }
  cout << cnt << endl;
  return 0;
}
