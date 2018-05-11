// CGL_1_A.cpp
//
#include <bits/stdc++.h>
using namespace std;

const double EPS = 1e-10;

typedef complex<double> Point;
#define X real()
#define Y imag()

struct Segment {
  Point p1, p2;
  Segment(){};
  Segment(Point p1, Point p2) : p1(p1), p2(p2) {};
};
typedef Segment Line;

// 内積
double dot(Point a, Point b){return real(conj(a) * b);}

// 射影
Point project(Line l, Point p) {
  double r = dot(p - l.p1, l.p2 - l.p1) / norm(l.p2 -l.p1);
  return l.p1 + (l.p2 - l.p1) * r;
}

int main() {
  int x1,y1,x2,y2,q,xp,yp;
  cin>>x1>>y1>>x2>>y2>>q;
  Line l(Point(x1,y1), Point(x2,y2));
  for(int i=0;i<q;++i){
    cin>>xp>>yp;
    Point p(xp,yp);
    printf("%.8f %.8f\n", project(l,p).X, project(l,p).Y);
  }
  return 0;
}
