#include <iostream>
#include <string>
using namespace std;
int main() {
  string T, P;
  int p = 0;
  cin >> T >> P;
  while(p < int(T.length() - P.length() + 1)) {
	if(p == (int)T.find(P,p)) {
	  cout << (int)T.find(P, p) << endl;
	}
	p++;
  }
  return 0;
}
