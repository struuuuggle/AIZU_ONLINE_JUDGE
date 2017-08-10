#include <iostream>
using namespace std;
int main() {
  int a[4] = {};
  int b[4] = {};
  while(cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3]){
	int hit = 0, blow = 0;
	for(int i = 0; i < 4; ++i) {
	  for(int j = 0; j < 4; ++j) {
		if(i == j && a[i] == b[j]) {
		  hit++;
		}
		else if(i != j && a[i] == b[j]) {
		  blow++;
		}
	  }
	}
	cout << hit << " " << blow << endl;
  }
  return 0;
}
