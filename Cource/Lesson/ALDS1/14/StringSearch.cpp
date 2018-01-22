#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main() {
  string T, P;
  cin >> T >> P;
  for(int i = 0; i < int(T.size() - P.size()) + 1; ++i) {
	if(P == T.substr(i, P.size())) {
	  printf("%d\n", i);
	}
  }
  return 0;
}
