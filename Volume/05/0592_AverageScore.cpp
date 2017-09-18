#include <iostream>
using namespace std;
int main() {
  int s[5], sum = 0;
  for(int i = 0; i < 5; ++i) {
	cin >> s[i];
	if(s[i] < 40) s[i] = 40;
	sum += s[i];
  }
  cout << sum / 5 << endl;
  return 0;
}
