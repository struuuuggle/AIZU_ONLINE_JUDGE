#include <iostream>
#include <complex>
using namespace std;
typedef complex<double> P;

/* 許容する誤差ε*/
#define EPS (1e-10)
/* 2つのスカラーが等しいかどうか */
#define EQ(a,b) (abs((a)-(b)) < EPS)

/* 外積 (cross product) : a×b = |a||b|sin */
double cross(P a, P b) {
  return (a.real() * b.imag() - a.imag() * b.real());
}


/* 2直線の平行判定 : a//b <=> cross(a, b) = 0 */
int isParallel(P a1, P a2, P b1, P b2) {
  return EQ( cross(a1-a2, b1-b2), 0.0 );
}

int main() {
  int n;
  double ax, ay, bx, by, cx, cy, dx, dy;
  cin >> n;

  while(n--) {
    cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;
    P a(ax, ay), b(bx, by), c(cx, cy), d(dx, dy);
    cout << (isParallel(a, b, c, d) ? "YES" : "NO") << endl;
  }

  return 0;
}
