#include <stdio.h>

int main(void)
{
  int W, H, x, y, r;

  scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);

  if ( x-r >= 0 && W-x >= r) {
	if ( y-r >= 0 && H-y >= r) {
	  puts("Yes");
	}
	else {
	  puts("No");
	}
  }
  else {
	puts("No");
  }

  return 0;
}
