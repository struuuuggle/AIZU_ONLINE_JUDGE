/*
top = 3, 4のときは遷移が一意に定まらない。
*/

#include <iostream>
using namespace std;
class Dice {
 public:
  int top;
  int label[6];
  void moveN() {
	if (top == label[0]) {top = label[1];}
	else if (top == label[1]) {top = label[5];}
	else if (top == label[2]) {top = label[5];}
	else if (top == label[3]) {top = label[1];}
	else if (top == label[4]) {top = label[0];}
	else if (top == label[5]) {top = label[4];}
  }
  void moveE() {
	if (top == label[0]) {top = label[3];}
	else if (top == label[1]) {top = label[3];}
	else if (top == label[2]) {top = label[1];}
	else if (top == label[3]) {top = label[5];}
	else if (top == label[4]) {top = label[3];}
	else if (top == label[5]) {top = label[3];}
  }
  void moveS() {
	if (top == label[0]) {top = label[4];}
	else if (top == label[1]) {top = label[0];}
	else if (top == label[2]) {top = label[0];}
	else if (top == label[3]) {top = label[4];}
	else if (top == label[4]) {top = label[5];}
	else if (top == label[5]) {top = label[1];}
  }
  void moveW() {
	if (top == label[0]) {top = label[2];}
	else if (top == label[1]) {top = label[2];}
	else if (top == label[2]) {top = label[4];}
	else if (top == label[3]) {top = label[0];}
	else if (top == label[4]) {top = label[2];}
	else if (top == label[5]) {top = label[2];}
  }
};

int main() {
  Dice d1;
  char ch;
  d1.top = 1;
  for(int i = 0; i < 6; i++) {
	cin >> d1.label[i];
  }
  while(cin >> ch) {
	if(ch == 'N') {d1.moveN();}
	else if(ch == 'E') {d1.moveE();}
	else if(ch == 'S') {d1.moveS();}
	else if(ch == 'W') {d1.moveW();}
  }
  cout << d1.top << endl;
  return 0;
}
