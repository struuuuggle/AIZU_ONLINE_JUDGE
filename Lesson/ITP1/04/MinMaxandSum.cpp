/*
 *n個の整数 ai(i=1,2,...n)を入力し、それらの最小値、最大値、合計値を求めるプログラム
 *0<n≤10000
 *−1000000≤ai≤1000000
*/

#include <iostream>

using namespace std;

int main() {
  int n;
  long v, min, max;
  long sum = 0;//int型だとaiが入りきらない可能性がある

  cin >> n;
  
  for (int i = 0; i < n; i++) {
	cin >> v;
	sum += v;
	if (i == 0) {
	  max = v;
	  min = v;
	}
	else {
	  if (max <= v) {
		max = v;
	  }
	  if (min >= v) {
		min = v;
	  }
	}
  }
  cout << min << " " << max << " " << sum << endl;
  return 0;
}
