#include <iostream>
using namespace std;

void random(int s) {
  int x;
  for(int i = 0; i < 10; ++i) {
	if(i == 0) {
	  x = (s * s / 100) % 10000;
	}
	else {
	  x = (x * x / 100) % 10000;
	}
	cout << x << endl;
  }
}
int main() {
  int n;
  int s[10];
  cin >> n;

  for(int i = 0; i < n; ++i) {
	cin >> s[i];
  }

  for(int i = 0; i < n; ++i) {
	cout << "Case " << i + 1 << ":" << endl;
	random(s[i]);
  }
}
