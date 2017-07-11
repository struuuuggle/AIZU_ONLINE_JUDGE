#include <iostream>
using namespace std;
int main() {
  int i, j, r, c;
  int s[101][101] = {};
  cin >> r >> c;
  for(i = 0; i < r; i++) {
	for(j = 0; j < c; j++) {
	  cin >> s[i][j];
	}
  }
  for(i = 0; i < r; i++) {
	for(j = 0; j < c; j++) {
	  s[i][c] += s[i][j];
	  s[r][j] += s[i][j];
	  s[r][c] += s[i][j];
	}
  }
  for(i = 0; i < r + 1; i++) {
	for(j = 0; j < c + 1; j++) {
	  cout << s[i][j];
	  if(j < c) { cout << " "; }
	  else { cout << endl; }
	}
  }
  return 0;
}
