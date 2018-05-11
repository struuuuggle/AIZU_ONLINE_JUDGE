// CGL_1_C.cpp
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

double dot(Point a, Point b){return real(conj(a) * b);}
double cross(Point a, Point b){return imag(conj(a) * b);}

string ccw(Point a, Point b, Point c) {
  Point x = b - a;
  Point y = c - a;
  if(cross(x, y) > EPS) return "COUNTER_CLOCKWISE";
  if(cross(x, y) < -EPS) return "CLOCKWISE";
  if(dot(x, y) < -EPS) return "ONLINE_BACK";
  if(norm(x) < norm(y)) return "ONLINE_FRONT";
  return "ON_SEGMENT";
}


int main() {
  int a,b,c,d,q;
  cin>>a>>b>>c>>d>>q;
  Point p0(a,b), p1(c,d);
  for(int i=0;i<q;++i){
    int e,f;
    cin>>e>>f;
    Point p2(e,f);
    cout<<ccw(p0,p1,p2)<<endl;
  }
  return 0;
}
