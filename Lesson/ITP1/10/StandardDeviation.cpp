#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
void variance(int *v, int n) {
  int i;
  double sum1 = 0;//整数型にすると型変換されて、精度が落ちちゃう
  double sum2 = 0;
  for(i = 0; i < n; i++) {
	sum1 += v[i];
	sum2 += pow(v[i], 2);
  }
  long double Ave = sum1 / n;
  long double Var = sum2 / n - pow(Ave, 2.0);
  printf("%.8f\n", sqrt(Var));
}
  
int main() {
  int i, n;
  int *p;
  while(cin >> n) {
	if (n == 0) { break; }
	p = new int[1000];
	for(i = 0; i < n; i++) {
	  cin >> p[i];
	}
	variance(p, n);
  }
  return 0;
}
