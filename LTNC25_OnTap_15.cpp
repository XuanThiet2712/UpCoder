#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int x ; 
double S(int n) {
	if (n == 0) return 1 ; 
	return pow(x , n) + S(n-1);
}

int main() {
	int n;
	cin >> x >> n;
	cout << S(n) ; 
}
