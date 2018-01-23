#include <iostream>
using namespace std;

void  ExtendedEuclid(int a, int b) {
  int r0 = a, r1 = b;
  int x0 = 1, x1 = 0;
  int y0 = 0, y1 = 1;
  int q, r2, x2, y2;

  while(r1 != 0) {
    q = r0 / r1;
    r2 = r0 % r1;
    x2 = x0 - q * x1;
    y2 = y0 - q * y1;
    r0 = r1;
    r1 = r2;
    x0 = x1;
    x1 = x2;
    y0 = y1;
    y1 = y2;
  }
  cout << x0 << " " << y0 << endl;
}

int extgcd(int a, int b, int &x, int &y) {
  int d = a;
  if(b != 0) {
    d = extgcd(b, a % b, y, x);
    y -= (a / b) * x;
  }
  else {
    x = 1;
    y = 0;
  }
  return d;
}

int main() {
  int a, b, x, y;
  cin >> a >> b;
  //ExtendedEuclid(a, b);
  extgcd(a, b, x, y);
  cout << x << ' ' << y << endl;
  return 0;
}
