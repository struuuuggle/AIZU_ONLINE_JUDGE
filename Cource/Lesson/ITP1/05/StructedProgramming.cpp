#include <iostream>
using namespace std;
int main() {
  int i, j, n;
  cin >> n;
  for(i = 1; i <= n; i++) {
	if(i % 3 == 0) {
	  cout << " " << i;
	}
	else {
	  j = i;
	  while(j > 0) {
		if(j % 10 == 3) {
		  cout << " " << i;
		  break;
		}
		j /= 10;
	  }//END:while
	}//END:else
  }//END:for
  cout << endl;
  return 0;
}
