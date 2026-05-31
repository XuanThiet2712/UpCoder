#include <iostream>
#include <iomanip>
using namespace std;

double S(int n) {
	if (n == 1) return 2; 
	return 2 * S(n-1) ; 
}

int main() {
	int n;
	cin >> n;
	cout << S(n) ; 
}
