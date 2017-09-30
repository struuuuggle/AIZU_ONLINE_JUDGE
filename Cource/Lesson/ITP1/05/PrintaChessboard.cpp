#include <iostream>
using namespace std;
int main() {
  int i, j, H, W;
  int ff = 0;
  while(cin >> H >> W) {
	if (H == 0 || W == 0) { break; }
	for(i = 0; i < H; i++) {
	  for(j = 0; j < W; j++) {
		if((i + j) % 2 == 0) { cout << "#"; }
		else { cout << "."; }
	  }
	  cout << endl;
	}
	cout << endl;
  }
  return 0;
}
