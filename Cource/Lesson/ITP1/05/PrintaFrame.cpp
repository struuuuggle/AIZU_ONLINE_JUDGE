#include <iostream>
using namespace std;
int main() {
  int i, j, H, W;
  while(cin >> H >> W) {
	if (H == 0 && W == 0) { break; }
	for (i = 0; i < H; i++) {
	  cout << "#";
	  for(j = 0; j < W - 2; j++) {
		if(i == 0 || i == H - 1) { cout << "#"; }
		else { cout << "."; }
	  }
	  cout << "#" << endl;
	}
	cout << endl;
  }
  return 0;
}
