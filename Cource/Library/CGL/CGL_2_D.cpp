// CGL_2_D.cpp
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

Point project(Segment s, Point p) {
  double r = dot(p - s.p1, s.p2 - s.p1) / norm(s.p2 - s.p1);
  return s.p1 + (s.p2 - s.p1) * r;
}

bool isParallel(Line l1, Line l2) {
  return EQ(cross(l1.p1 - l1.p2, l2.p1 - l2.p2), 0.0);
}

const int COUNTER_CLOCKWISE = +1;
const int CLOCKWISE = -1;
const int ONLINE_BACK = +2;
const int ONLINE_FRONT = -2;
const int ON_SEGMENT = 0;
int ccw(Point a, Point b, Point c) {
  Point x = b - a;
  Point y = c - a;
  if(cross(x, y) > EPS) return COUNTER_CLOCKWISE;
  if(cross(x, y) < -EPS) return CLOCKWISE;
  if(dot(x, y) < -EPS) return ONLINE_BACK;
  if(norm(x) < norm(y)) return ONLINE_FRONT;
  return ON_SEGMENT;
}

bool intersectSS(Segment s1, Segment s2) {
  return ccw(s1.p1, s1.p2, s2.p1) * ccw(s1.p1, s1.p2, s2.p2) <= 0 &&
    ccw(s2.p1, s2.p2, s1.p1) * ccw(s2.p1, s2.p2, s1.p2) <= 0;
}

double distancePP(Point a, Point b) {
  return abs(a - b);
}

double distanceLP(Line l, Point p) {
  return distancePP(p, project(l, p));
}

double distanceSP(Segment s, Point p) {
  if(dot(s.p2 - s.p1, p - s.p1) < -EPS) return distancePP(p, s.p1);
  if(dot(s.p1 - s.p2, p - s.p2) < -EPS) return distancePP(p, s.p2);
  return distanceLP(s, p);
}

double distanceSS(Segment s1, Segment s2) {
  if(intersectSS(s1, s2)) return 0.0;
  return min(min(distanceSP(s1, s2.p1), distanceSP(s1, s2.p2)),
             min(distanceSP(s2, s1.p1), distanceSP(s2, s1.p2)));
}

int main() {
  int q;
  cin>>q;
  int a,b,c,d,e,f,g,h;
  for(int i=0;i<q;++i){
    cin>>a>>b>>c>>d>>e>>f>>g>>h;
    Line s1(Point(a,b), Point(c,d));
    Line s2(Point(e,f), Point(g,h));
    printf("%.10f\n", distanceSS(s1,s2));
  }

  return 0;
}
