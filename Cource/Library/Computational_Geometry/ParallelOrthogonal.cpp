#include <cstdio>
#include <complex>
using namespace std;
typedef complex<double> P;

/* 許容する誤差ε  */
#define EPS (1e-10)
/* 2つのスカラーが等しいかどうか */
#define EQ(a,b) (abs((a)-(b)) < EPS)

/* 外積 (cross product) : a×b = |a||b|sin */
double cross(P a, P b) {
  return (a.real() * b.imag() - a.imag() * b.real());
}

/* 内積 (dot product) : a⋅b = |a||b|cosθ  */
double dot(P a, P b) {
  return (a.real() * b.real() + a.imag() * b.imag());
}

/* 2直線の直交判定 : a⊥b <=> dot(a, b) = 0 */
int isOrthogonal(P a1, P a2, P b1, P b2) {
  return EQ( dot(a1-a2, b1-b2), 0.0 );
}

/* 2直線の平行判定 : a//b <=> cross(a, b) = 0 */
int isParallel(P a1, P a2, P b1, P b2) {
  return EQ( cross(a1-a2, b1-b2), 0.0 );
}


int main() {
  int n;
  int ax, ay, bx, by, cx, cy, dx, dy;
  scanf("%d", &n);

  while(n--) {
    scanf("%d %d %d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy);
    P a(ax, ay), b(bx, by), c(cx, cy), d(dx, dy);
    if(isParallel(a, b, c, d)) puts("2");
    else if(isOrthogonal(a, b, c, d)) puts("1");
    else puts("0");
  }
  return 0;
}
