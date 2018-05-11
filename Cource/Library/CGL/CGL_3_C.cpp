// CGL_3_C.cpp
//
#include <bits/stdc++.h>
using namespace std;

const double EPS = 1e-10;
bool EQ(double a, double b){return fabs(a-b) < EPS;}
typedef complex<double> Point;
#define X real()
#define Y imag()
double dot(Point a, Point b){return real(conj(a) * b);}
double cross(Point a, Point b){return imag(conj(a) * b);}

typedef vector<Point> Polygon;
#define curr(P,i) P[i]
#define next(P,i) P[(i+1)%P.size()]
#define prev(P,i) P[(i+P.size()-1) % P.size()]

const int IN = 2;
const int ON = 1;
const int OUT = 0;
int contains(Polygon P, Point p) {
  bool in = false;
  for(int i = 0; i < P.size(); ++i){
    Point a = curr(P,i) - p;
    Point b = next(P,i) - p;
    // 点が多角形の辺上にある場合
    if(EQ(cross(a,b), 0.0) && dot(a,b) < EPS) return ON;
    // 点が多角形の内側にあるか外側にあるかを調べる
    if(a.Y > b.Y) swap(a,b);
    if(a.Y < EPS && EPS < b.Y && cross(a,b) > EPS) in = !in;
  }
  return in ? IN: OUT;
}

int main() {
  int n,x,y;
  Polygon P;
  cin>>n;
  for(int i=0;i<n;++i){
    cin>>x>>y;
    P.push_back(Point(x,y));
  }

  int q;
  Point p;
  cin>>q;
  for(int i=0;i<q;++i){
    cin>>x>>y;
    cout<<contains(P,Point(x,y))<<endl;
  }
  return 0;
}
