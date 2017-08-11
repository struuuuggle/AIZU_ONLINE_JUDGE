#include <iostream>
#include <cmath>
#include <numeric>
#define MAX 1000000
using namespace std;

bool isPrime(int x) {
  if(x == 2) {
	return true;
  }
  
  if(x < 2 || x % 2 == 0) {
	return false;
  }
  for(int i = 3; i <= sqrt(x); i += 2) {
	if(x % i == 0) {
	  return false;
	}
  }
  return true;
}

int main() {
  int n;
  bool a[MAX] = {};

  for(int i = 1; i < MAX; ++i) {
	if(isPrime(i)) {
	  a[i] = true;
	}
  }

  while(cin >> n) {
	cout << accumulate(&a[1], &a[n + 1], 0) << endl;
  }
  return 0;
}

/*-- primitive algorithm --*/
/*
bool isPrime(int n) {
  for(int i = 2; i < n; ++i) {
	if(n % i == 0) return false;
  }
  return true;
}
*/
