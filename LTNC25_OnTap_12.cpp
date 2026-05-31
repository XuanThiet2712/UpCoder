#include <iostream>
#include <iomanip>
using namespace std;

double tien(int n) {
	if (n == 0) return 1.0; 
	return tien(n - 1) * 1.07;
}

int main() {
	int n;
	cin >> n;
	
	cout << fixed << setprecision(2) << tien(n);
	return 0;
}
