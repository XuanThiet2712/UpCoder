#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
long long S(int n) {
	if (n == 0 ) return 0 ; 
	if (n == 1) return 1 ; 
	if (n % 2 == 0) return S(n/2);
	return S(n/2) + S(n+1) ; 
}

int main() {
	int n;
	cin >> n;
	int m = S(n) ;
	for (int i = 0 ; i < n ; i++){
		int x = S(i) ; 
		if(m < x) m = x;
	}
	cout << m ; 
}
