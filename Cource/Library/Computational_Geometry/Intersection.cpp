#include <cstdio>
#include <iostream>
#include <complex>
using namespace std;
typedef complex<double> P;

/* 許容する誤差ε  */
#define EPS (1e-10)

/* 外積 (cross product) : a×b = |a||b|sin */
double cross(const P& a, const P& b) {
  return (a.real() * b.imag() - a.imag() * b.real());
}

/* a1,a2を端点とする線分とb1,b2を端点とする線分の交差判定 */
int isIntersectedLS(P a1, P a2, P b1, P b2) {
  if(max(a1.real(),a2.real()) + EPS < min(b1.real(),b2.real())) return false;
    if(max(b1.real(),b2.real()) + EPS < min(a1.real(),a2.real())) return false;
    if(max(a1.imag(),a2.imag()) + EPS < min(b1.imag(),b2.imag())) return false;
    if(max(b1.imag(),b2.imag()) + EPS < min(a1.imag(),a2.imag())) return false;
  return ( cross(a2-a1, b1-a1) * cross(a2-a1, b2-a1) < EPS ) &&
         ( cross(b2-b1, a1-b1) * cross(b2-b1, a2-b1) < EPS );
}

int main() {
  int n;
  int ax, ay, bx, by, cx, cy, dx, dy;
  scanf("%d", &n);

  while(n--) {
    scanf("%d %d %d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy);
    P a(ax, ay), b(bx, by), c(cx, cy), d(dx, dy);

    printf("%d\n", isIntersectedLS(a, b, c, d));
  }
  return 0;
}
