#include <iostream>
#include <cstdio>
using namespace std;
/*
void data(int l[], double d_sum[]) {
  puts("===== data =======");
  puts("l\td_sum");
  for(int j = 0; j < 10; ++j) {
	printf("%d\t%lf\n", l[j], d_sum[j]);
  }
  puts("==================");
}
*/
int main() {
  int l[10];
  double d_sum[10];
  int v1, v2;
  double time, d_train1;
  
  while(~scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", &l[0], &l[1], &l[2], &l[3], &l[4], &l[5], &l[6], &l[7], &l[8], &l[9], &v1, &v2)) {
	for(int i = 0; i < 10; ++i) {
	  if(i == 0) d_sum[i] = l[i];
	  else d_sum[i] = d_sum[i - 1] + l[i];
	}

	//data(l, d_sum);
	
	time = d_sum[9] / (double)(v1 + v2);
	d_train1 = v1 * time;

	for(int j = 0; j < 10; ++j) {
	  if(d_train1 <= d_sum[j]) {
		printf("%d\n", j + 1);
		break;
	  }
	}

	l[10] = {};
	d_sum[10] = {};
  }
  return 0;
}
