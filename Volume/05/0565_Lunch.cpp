#include <iostream>
using namespace std;
int main() {
  int p1, p2, p3, j1, j2, min, sum = 0;
  cin >> p1 >> p2 >> p3;
  min = (p1 <= p2 ? p1 : p2);
  sum += (min <= p3 ? min : p3);
  cin >> j1 >> j2;
  sum += (j1 <= j2 ? j1 : j2) - 50;
  cout << sum << endl;
  return 0;
}
