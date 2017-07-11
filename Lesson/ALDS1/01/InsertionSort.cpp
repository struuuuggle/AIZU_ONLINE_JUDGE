#include <iostream>
using namespace std;
void insertionsort(int *A, int N) {
  int v;
  for(int i = 0; i < N - 1; i++) {
	v = A[i];
	j = i - 1;
	while(j >= 0 && A[j] > v) {
	  A[j + 1] = A[j--];
	  A[j + 1] = v;
	}
  }
int main() {

  return 0;
}
