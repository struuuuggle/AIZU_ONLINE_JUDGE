// 2699_KotoMunicipalSubway.cpp
//
#include <bits/stdc++.h>
using namespace std;
int d, e;
double _min;
int main() {
  while(cin >> d >> e && d && e) {
    _min = 1000000;
    for(int i = 0; i <= d; ++i) {
      _min = min(_min, abs(sqrt(i*i + (d-i)*(d-i)) - e) );
    }
    cout << _min << endl;
  }
  return 0;
}
