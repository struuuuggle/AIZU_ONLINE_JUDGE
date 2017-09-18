#include <iostream>
using namespace std;
int main() {
  string str;
  int n;
  getline(cin, str);
  for(int i = 0; i < (int)str.length(); ++i) {
	n = str[i] - 'A' + 23;
	if(n >= 26) {
	  n -= 26;
	}
	str[i] = char(n + 'A');
	cout << str[i];
  }
  cout << endl;

  return 0;
}
