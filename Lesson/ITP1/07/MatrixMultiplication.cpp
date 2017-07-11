#include <iostream>
using namespace std;
int main() {
  int A[100][100];
  int B[100][100];
  long C[100][100] = {};//int型だと入りきらない可能性アリ
  int i, j, k, n, m, l;
  cin >> n >> m >> l;
  for(i = 0; i < n; i++) {
	for(j = 0; j < m; j++) {
	  cin >> A[i][j];
	}
  }
  for(i = 0; i < m; i++) {
	for(j = 0; j < l; j++) {
	  cin >> B[i][j];
	}
  }
  for(i = 0; i < n; i++) {
	for(j = 0; j < l; j++) {
	  for(k = 0; k < m; k++) {
		C[i][j] += A[i][k] * B[k][j];
	  }
	}
  }
  for(i = 0; i < n; i++) {
	for(j = 0; j < l; j++) {
	  cout << C[i][j];
	  if(j < l - 1) { cout << " "; }
	  else { cout << endl; }
	}
  }
  return 0;
}
