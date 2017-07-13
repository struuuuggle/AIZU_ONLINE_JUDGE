#include <iostream>
using namespace std;
int main() {
  int i, n, num, max, min;
  cin >> n;
  for(i = 0; i < n; i++) {
	cin >> num;
	if(i == 0) min = num;
	if(i == 1) max = num;
	else {
	  max = (max > (num - min)) ? max : num - min;
	  min = (min < num) ? min : num;
	}
  }
  cout << max - min << endl;

  return 0;
}
