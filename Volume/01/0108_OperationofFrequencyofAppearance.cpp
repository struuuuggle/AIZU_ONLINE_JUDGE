#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &v1) {
  for(int j = 0; j < (int)v1.size(); ++j) {
	cout << v1[j];
	cout << (j < (int)v1.size() - 1 ? " " : "\n");
  }
}

int loop_cnt;
void op(vector<int> &v1) {
  vector<int> v2 = v1;
  for(int i = 0; i < (int)v1.size(); ++i) {
	int cnt = 0;
	for(int j = 0; j < (int)v1.size(); ++j) {
	  if(v1[j] == v1[i]) {
		cnt++;
		v2[j] = -1;
	  }
	}
	for(int j = 0; j < (int)v2.size(); ++j) {
	  if(v2[j] == -1) {
		v2[j] = cnt;
	  }
	}
  }
  if(v2 != v1) {
	loop_cnt++;
	op(v2);
  }
  else {
	cout << loop_cnt << endl;
	print(v1);
  }
}

int main() {
  int n;
  while(cin >> n && n) {
	loop_cnt = 0;
	vector<int> v(n);
	for(int i = 0; i < n; ++i) {
	  cin >> v[i];
	}
	op(v);
  }
  return 0;
}
