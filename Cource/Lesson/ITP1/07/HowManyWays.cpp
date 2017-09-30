#include <iostream>
using namespace std;
int cmb(int n, int x) {
  int i, j, k;
  int cnt = 0;
  for(i = 1; i <= n - 2; i++) {
	for(j = i + 1; j <= n - 1; j++) {
	  for(k = j + 1; k <= n; k++) {
		  if(i + j + k == x) {
			cnt++;
		  }
	  }
	}
  }
  return cnt;
}
int main() {
  int  n, x;
  while(cin >> n >> x) {
	if(n == 0 && x == 0) { break; }
	cout << cmb(n, x) << endl;
  }
  return 0;
}
