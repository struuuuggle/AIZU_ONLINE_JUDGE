// CGL_3_B.cpp
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
typedef vector<Point> Polygon;
double dot(Point a, Point b){return real(conj(a) * b);}
double cross(Point a, Point b){return imag(conj(a) * b);}

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

#define curr(P,i) P[i]
#define next(P,i) P[(i+1)%P.size()]
#define prev(P,i) P[(i+P.size()-1) % P.size()]
bool isConvex(Polygon P) {
  for(int i = 0; i < P.size(); ++i)
    if(ccw(prev(P,i), curr(P,i), next(P,i)) == CLOCKWISE) return false;
  return true;
}

int main() {
  int n,x,y;
  Polygon P;
  cin>>n;
  for(int i=0;i<n;++i){
    cin>>x>>y;
    P.push_back(Point(x,y));
  }
  cout<<isConvex(P)<<endl;
  return 0;
}
