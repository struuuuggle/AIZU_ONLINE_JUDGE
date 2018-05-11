// CGL_1_B.cpp
//
#include <bits/stdc++.h>
using namespace std;

const double EPS = 1e-10;
bool EQ(double a, double b){return fabs(a-b) < EPS;}
typedef complex<double> Point;
#define X real()
#define Y imag()
namespace std {
  bool operator == (const Point &a, const Point &b) {
    return EQ(a.X, b.X) && EQ(a.Y, b.Y);
  }
  bool operator < (const Point &a, const Point &b) {
    return a.X != b.X ? a.X < b.X : a.Y < b.Y;
  }
}
struct Segment {
  Point p1, p2;
  Segment(){};
  Segment(Point p1, Point p2) : p1(p1), p2(p2) {};
};
typedef Segment Line;
double dot(Point a, Point b){return real(conj(a) * b);}
double cross(Point a, Point b){return imag(conj(a) * b);}

Point project(Segment s, Point p) {
  double r = dot(p - s.p1, s.p2 - s.p1) / norm(s.p2 - s.p1);
  return s.p1 + (s.p2 - s.p1) * r;
}

Point reflect(Segment s, Point p) {
  return p + (project(s, p) - p) * 2.0;
}

int main() {
  int x1,y1,x2,y2,q,xp,yp;
  cin>>x1>>y1>>x2>>y2>>q;
  Line l(Point(x1,y1), Point(x2,y2));
  for(int i=0;i<q;++i){
    cin>>xp>>yp;
    Point p(xp,yp);
    printf("%.10f %.10f\n", reflect(l,p).X, reflect(l,p).Y);
  }

  return 0;
}
