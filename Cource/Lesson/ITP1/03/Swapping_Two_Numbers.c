#include <stdio.h>
#define DATA_SIZE 3000
int main(void)
{
  int x[DATA_SIZE];
  int y[DATA_SIZE];
  int i, j;
  int tmp;
  
  for(i = 0; i < DATA_SIZE; i++) {
	scanf("%d %d", &x[i], &y[i]);

	if (x[i] > y[i]) {
	  tmp = x[i];
	  x[i] = y[i];
	  y[i] = tmp;
	}
	
	if(x[i] == 0 && y[i] == 0)
	  break;
  }

  if (i < DATA_SIZE) {
	for (j = 0; j < i; j++) {
	  printf("%d %d\n", x[j], y[j]);
	}
  }

  else {
	for (j = 0; j < DATA_SIZE; j++) {
	  printf("%d %d", x[j], y[j]);
	}
  }

	return 0;
}
