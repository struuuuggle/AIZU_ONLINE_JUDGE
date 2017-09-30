#include <iostream>
#include <string>
#include <cstdlib>	// atoi
#include <stack>
using namespace std;

int main() {
  int a, b;
  stack<int> s;
  string buf;
  while(cin >> buf) {
	if(buf == "+") {
	  a = s.top(); s.pop();
	  b = s.top(); s.pop();
	  s.push(b + a);
	}
	else if(buf == "-") {
	  a = s.top(); s.pop();
	  b = s.top(); s.pop();
	  s.push(b - a);
	}
	else if(buf == "*") {
	  a = s.top(); s.pop();
	  b = s.top(); s.pop();
	  s.push(b * a);
	}
	else {
	  s.push(atoi(buf.c_str()));
	}
  }
  cout << s.top() << endl;
  return 0;
}

