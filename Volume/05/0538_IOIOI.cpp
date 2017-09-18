#include <iostream>
#include <string>
using namespace std;
int IOIOI(string str, string target) {
  int cnt = 0;
  int idx = 0;
  while((idx = (int)str.find(target, idx)) >= 0) {
	idx++;
	cnt++;
  }
  return cnt;
}

int main() {
  int n, m;
  string t, str;
  while(cin >> n, n) {
	cin >> m; // not use
	cin.ignore();
	getline(cin, str);
	t = "IOI";
	while(n-- > 1) {
	  t += "OI";
	}
	cout << IOIOI(str, t) << endl;
  }
  return 0;
}
