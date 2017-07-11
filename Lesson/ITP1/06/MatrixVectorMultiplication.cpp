#include <iostream>
using namespace std;
int main() {
  int A[100][100];
  int b[100];
  long c[100] = {};//int型だと入りきらない可能性アリ
  int i, j, n, m;
  cin >> n >> m;
  for(i = 0; i < n; i++) {
	for(j = 0; j < m; j++) {
	  cin >> A[i][j];
	}
  }
  for(j = 0; j < m; j++) {
	cin >> b[j];
  }

  for(i = 0; i < n; i++) {
	for(j = 0; j < m; j++) {
	  c[i] += A[i][j] * b[j];
	}
	cout << c[i] << endl;
  }
  return 0;
}
