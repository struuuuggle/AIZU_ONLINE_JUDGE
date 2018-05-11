// CGL_2_C.cpp
//
#include <bits/stdc++.h>
using namespace std;

const double EPS = 1e-10;
bool EQ(double a, double b){return fabs(a-b) < EPS;}
typedef complex<double> Point;
#define X real()
#define Y imag()

struct Segment {
  Point p1, p2;
  Segment(){};
  Segment(Point p1, Point p2) : p1(p1), p2(p2) {};
};
typedef Segment Line;
double dot(Point a, Point b){return real(conj(a) * b);}
double cross(Point a, Point b){return imag(conj(a) * b);}

// 線分の交差判定を使って、線分が交差していると判定し、
// かつ、線分が交点をもつ (重なっていない) 場合に使える
Point getCrossPointSS(Segment s1, Segment s2) {
  Point b = s2.p2 - s2.p1;
  double d1 = abs(cross(b, s1.p1 - s2.p1));
  double d2 = abs(cross(b, s1.p2 - s2.p1));
  double t = d1 / (d1 + d2);
  return s1.p1 + (s1.p2 - s1.p1) * t;
}

int main() {
  int q;
  cin>>q;
  for(int i=0;i<q;++i){
    int a,b,c,d,e,f,g,h;
    cin>>a>>b>>c>>d>>e>>f>>g>>h;
    Line s1(Point(a,b), Point(c,d));
    Line s2(Point(e,f), Point(g,h));
    double x=getCrossPointSS(s1,s2).X;
    double y=getCrossPointSS(s1,s2).Y;
    printf("%.10f %.10f\n", x,y);
  }


  return 0;
}
