#include <iostream>
#include <vector>
using namespace std;

char tile[100][100];
bool memo[100][100];

template <typename T>
void init(T a[100][100]) {
  for(int i = 0; i < 100; ++i) {
	for(int j = 0; j < 100; ++j) {
	  a[i][j] = 0;
	}
  }
}

void Step(char tile[100][100]) {
  int h = 0, w = 0;

  while(1) {
	if(memo[h][w] == 1) {
	  cout << "LOOP" << endl;
	  break;
	}
	
	// '>'のマスに来た時の動作
	if(tile[h][w] == '>') {
	  memo[h][w] = 1;
	  w++;
	}
	// '<'のマスに来た時の動作
	else if(tile[h][w] == '<') {
	  memo[h][w] = 1;
	  w--;
	}
	
	// '^'のマスに来た時の動作
	else if(tile[h][w] == '^') {
	  memo[h][w] = 1;
	  h--;
	}

	// 'v'のマスに来た時の動作
	else if(tile[h][w] == 'v') {
	  memo[h][w] = 1;
	  h++;
	}

	// '.'のマスに来た時の動作
	else {
	  cout << w << " " << h << endl;
	  break;
	}
  }// END:while

}

int main() {
  int H, W;
  while(cin >> H >> W) {
	if(H == 0 && W == 0) break;

	init<bool>(memo);
	init<char>(tile);
	
	for(int i = 0; i < H; ++i) {
	  for(int j = 0; j < W; ++j) {
		cin >> tile[i][j];
	  }
	}
	
	Step(tile);
  }

  return 0;
}
