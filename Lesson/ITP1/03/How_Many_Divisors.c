#include <stdio.h>

int main(void)
{
  int cnt = 0;
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);

  while(a <= b) {
	if (c % a == 0) {
	  cnt++;
	}
	a++;
  }

  printf("%d\n", cnt);

  return 0;
}
