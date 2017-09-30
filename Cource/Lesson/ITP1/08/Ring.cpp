#include <iostream>
using namespace std;
int main() {
  string p, s;
  cin >> p;
  p += p;
  cin >> s;
  if((int)p.find(s) != -1) {
	cout << "Yes" << endl;
  }
  else {
	cout << "No" << endl;
  }
  return 0;
}
