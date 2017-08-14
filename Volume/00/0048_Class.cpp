#include <cstdio>
using namespace std;
int main() {
  double w;
  while(~scanf("%lf", &w)) {
	if(w <= 48.00) puts("light fly");
	else if(w <= 51.00) puts("fly");
	else if(w <= 54.00) puts("bantam");
	else if(w <= 57.00) puts("feather");
	else if(w <= 60.00) puts("light");
	else if(w <= 64.00) puts("light welter");
	else if(w <= 69.00) puts("welter");
	else if(w <= 75.00) puts("light middle");
	else if(w <= 81.00) puts("middle");
	else if(w <= 91.00) puts("light heavy");
	else puts("heavy");
  }
  return 0;
}
