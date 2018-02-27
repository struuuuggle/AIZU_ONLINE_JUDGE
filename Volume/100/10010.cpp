#include <iostream>
using namespace std;
const int INF = 100000000;
int a, b;
char op;

void solve() {
  switch(op) {
  case '+':
    cout << a + b << endl;
    return;
  case '-':
    cout << a - b << endl;
    return;
  case '*':
    cout << a * b << endl;
    return;
  case '/':
    cout << int(a / b) << endl;
    return;
  case '?':
    return;
  default:
    return;
  }
}

int main() {
  while(cin >> a >> op >> b) {
    if (a == 0 && op == '?' && b == 0) break;
    solve();
  }
  return 0;
}
