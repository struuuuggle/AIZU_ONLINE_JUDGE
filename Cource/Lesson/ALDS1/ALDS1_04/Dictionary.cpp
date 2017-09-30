#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main() {
  set<string> st;
  int n;
  string op, str;
  
  cin >> n;
  for(int i = 0; i < n; ++i) {
	cin >> op >> str;
	if(op == "insert") {
	  //	  v.push_back(str);
	  st.insert(str);
	}
	else { // find
	  if(st.find(str) != st.end()) {
		cout << "yes" << endl;
	  }
	  else {
		cout << "no" << endl;
	  }
	}
  }
  return 0;
}
