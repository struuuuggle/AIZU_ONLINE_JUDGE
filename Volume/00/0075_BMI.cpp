#include <cstdio>
#include <vector>
using namespace std;
double bmi(double w, double h) {
  return w / (h * h);
}
int main() {
  vector<int> s;
  int id;
  float w, h;
  while(~scanf("%d,%f,%f", &id, &w, &h)) {
	if(bmi(w, h) >= 25) {
	  s.push_back(id);
	}
  }
  for(int i = 0; i < (int)s.size(); ++i) {
	printf("%d\n", s[i]);
  }
  return 0;
}
