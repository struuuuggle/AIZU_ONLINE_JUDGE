#include <stdio.h>

int main() {
  int a, b, c;
  int out;

  while (scanf("%d %d", &a, &b) != EOF) {
	out = 0;
	c = a + b;
	do {
	  c /= 10;
	  out++;
	} while (c > 0);
	
	printf("%d\n", out);
  }
  return 0;
}
