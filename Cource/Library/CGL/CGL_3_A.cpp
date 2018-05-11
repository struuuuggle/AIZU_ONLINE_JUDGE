// CGL_3_A.cpp
//
#include <bits/stdc++.h>
using namespace std;

const double EPS = 1e-10;
bool EQ(double a, double b){return fabs(a-b) < EPS;}
typedef complex<double> Point;

typedef vector<Point> Polygon;

double cross(Point a, Point b){return imag(conj(a) * b);}

#define curr(P,i) P[i]
#define next(P,i) P[(i+1)%P.size()]
double area(Polygon P) {
  double a = 0;
  for(int i = 0; i < P.size(); ++i)
    a += cross(curr(P,i), next(P,i));
  return 0.5 * a;
}

int main() {
  int n,x,y;
  Polygon P;
  cin>>n;
  for(int i=0;i<n;++i){
    cin>>x>>y;
    P.push_back(Point(x,y));
  }
  printf("%.1f\n",area(P));
  return 0;
}
