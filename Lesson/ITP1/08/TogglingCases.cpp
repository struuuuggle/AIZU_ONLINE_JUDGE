#include <iostream>
#include <stdio.h>
#include <cctype>
using namespace std;
int main() {
  char ch;
  while(1) {
	scanf("%c", &ch);
	if(ch == '\n') { break; }
	
	if(islower(ch)) {
	  cout << char(toupper(ch));
	}
	else if(isupper(ch)) {
	  cout << char(tolower(ch));
	}
	else {
	  cout << ch;
	}
  }
  cout << endl;
  return 0;
}
