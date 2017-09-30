#include <iostream>
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
  void roll(char ch) {
	if(ch == 'N') {
	  rollN();
	}
	else if(ch == 'E') {
	  rollE();
	}
	else if(ch == 'S') {
	  rollS();
	}
	else {
	  rollW();
	}
  }
  void rollN() {
	swap(dice[0], dice[1]);
	swap(dice[1], dice[5]);
	swap(dice[5], dice[4]);
  }
  void rollS() {
	swap(dice[0], dice[4]);
	swap(dice[4], dice[5]);
	swap(dice[5], dice[1]);
  }
  void rollE() {
	swap(dice[0], dice[3]);
	swap(dice[3], dice[5]);
	swap(dice[5], dice[2]);
  }
  void rollW() {
	swap(dice[0], dice[2]);
	swap(dice[2], dice[5]);
	swap(dice[5], dice[3]);
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
string isSame(Dice d1, Dice d2) {
  if(right(d1, d1.dice[0], d1.dice[1]) == right(d2, d1.dice[0], d1.dice[1]) && right(d1, d1.dice[3], d1.dice[4]) == right(d2, d1.dice[3], d1.dice[4])) {
	return "Yes";
  }
  else {
	return "No";
  }

}
int main() {
  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;
  Dice d1(a, b, c, d, e, f);
  cin >> a >> b >> c >> d >> e >> f;
  Dice d2(a, b, c, d, e, f);
  cout << isSame(d1, d2) << endl;

  return 0;
}
