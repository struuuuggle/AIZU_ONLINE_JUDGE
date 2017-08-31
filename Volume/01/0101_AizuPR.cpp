#include <iostream>
#include <string>
using namespace std;

string replaceWholeSentence(const string& str, string before, string after) {
  string str2(str);
  int idx = 0;

  while( (idx = str2.find(before, idx)) >= 0) {
	str2.replace(idx, before.length(), after);
  }
  return str2;
}

int main() {
  int n;
  string buf;

  cin >> n;
  cin.ignore();
  
  for(int i = 0; i < n; ++i) {
	getline(cin, buf);
	cout << replaceWholeSentence(buf, "Hoshino", "Hoshina") << endl;
  }

  return 0;
}
