#include <iostream>
using namespace std;

int a[6];

void count(double h) {
  int x = (h - 160.0) * 0.2;
  if(x < 1) a[0]++;
  else if(1 <= x && x < 2) a[x]++;
  else if(2 <= x && x < 3) a[x]++;
  else if(3 <= x && x < 4) a[x]++;
  else if(4 <= x && x < 5) a[x]++;
  else a[5]++;
}

int main() {
  int n;
  cin >> n;
  
  double h;
  for(int i = 0; i < n; ++i) {
	cin >> h;
	count(h);
  }

  
  for(int i = 0; i < 6; ++i) {
	cout << i + 1 << ":";
	for(int j = 0; j < a[i]; ++j) {
	  cout << "*";
	}
	cout << endl;
  }
  return 0;
}
