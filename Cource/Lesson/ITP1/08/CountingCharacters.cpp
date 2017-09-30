#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
  int cnt[26] = {};
  char ch;
  while(cin >> ch) {
	if(isalpha(ch)) {
	  cnt[tolower(ch) - 'a']++;
	}
  }
  for(int i = 0; i < 26; i++) {
	cout << char(i + 'a') << " : " << cnt[i] << endl;
  }
  return 0;
}
