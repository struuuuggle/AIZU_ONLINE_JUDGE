#include <iostream>

using namespace std;

int s_n(string str) {
  if (str == "S") {return 0;}
  else if (str == "H") {return 1;}
  else if (str == "C") {return 2;}
  else if (str == "D") {return 3;}
}

string n_s(int n) {
  if (n == 0) {return "S";}
  else if (n == 1) {return "H";}
  else if (n == 2) {return "C";}
  else if (n == 3) {return "D";}
}

int main() {
  int trump[4][13] = {};
  int n, h, i, j, rank;
  string type;
  
  cin >> n;

  for (h = 0; h < n; h++) {
	cin >> type >> rank;
	trump[s_n(type)][rank - 1] = 1;
  }

  for (i = 0; i < 4; i++) {
	for(j = 0; j < 13; j++) {
	  if (trump[i][j] == 0) {
		cout << n_s(i) << " " << j + 1 << endl;
	  }
	}
	}
  return 0;
}



