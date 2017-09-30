// 途中

#include <iostream>
#include <vector>
using namespace std;
class Dice {
 public:
  int dice[6];
  Dice(int a, int b, int c, int d, int e, int f) {
	dice[0] = a;
	dice[1] = b;
	dice[2] = c;
	dice[3] = d;
	dice[4] = e;
	dice[5] = f;
  }
  void rollN() {
	swap(dice[0], dice[1]);
	swap(dice[1], dice[5]);
	swap(dice[5], dice[4]);
  }
  void rollE() {
	swap(dice[0], dice[3]);
	swap(dice[3], dice[5]);
	swap(dice[5], dice[2]);
  }
  void spinL() {
	swap(dice[1], dice[2]);
	swap(dice[2], dice[4]);
	swap(dice[4], dice[3]);
  }
  int top() {
	return dice[0];
  }
  int front() {
	return dice[1];
  }
  int right() {
	return dice[2];
  }
};
int right(Dice d1, int top, int front) {
	for(int i = 0; i < 4; ++i) {
	  if(d1.top() == top) break;
	  d1.rollE();
	}
	for(int i = 0; i < 4; ++i) {
	  if(d1.top() == top) break;
	  d1.rollN();
	}
	for(int i = 0; i < 4; ++i) {
	  if(d1.front() == front) break;
	  d1.spinL();
	}
	return d1.right();
}
bool isSame(Dice d1, Dice d2) {
  if(right(d1, d1.dice[0], d1.dice[1]) == right(d2, d1.dice[0], d1.dice[1]) && right(d1, d1.dice[3], d1.dice[4]) == right(d2, d1.dice[3], d1.dice[4])) {
	return true;
  }
  else {
	return false;
  }
}
Dice inputDice(int a, int b, int c, int d, int e, int f) {
  return Dice(a, b, c, d, e, f);
}
int main() {
  int n;
  int a, b, c, d, e, f;
  cin >> n;
  vector<Dice> v;
  for(int i = 0; i < n; ++i) {
	cin >> a >> b >> c >> d >> e >> f;
	v.push_back(inputDice(a, b, c, d, e, f));
  }

  for(int i = 0; i < n; ++i) {
	for(int j = i + 1; j < n; ++j) {
	  // debug
	  cout << "case: " << i << "&" << j << endl;
	  if(isSame(v[i], v[j]) == true) {
		// debug
		cout << "Same" << endl;
		//cout << "No" << endl;
		return 0;
	  }
	}
  }
  cout << "Yes" << endl;
  return 0;
}
