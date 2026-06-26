#include <bits/stdc++.h>
using namespace std ; 
int main(){
	int a , b , c ; 
	if(a == b && b == c && c == 0 ) {
		cout << -1 ;
		return 0 ; 
	}
	double denta = b*b - 4 * a * c ; 
	if(denta < 0 ) cout << 0 ; 
	else if (denta == 0 ){
		cout << -b/(2*a);
	}
	else if (denta > 0){
		double x1 = (-b + sqrt(denta)) / (2 * a ) ;
		double x2 = (-b - sqrt(denta)) / (2 * a ) ;
		if(x1 > x2) cout << x2 << endl << x1 ;
		else cout << x1 << endl << x2 ; 
	}
}
