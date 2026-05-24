#include <iostream>
#include <cmath>
using namespace std ;

double S(int n){
	if(n == 1 ) return sqrt(2) ; 
	return sqrt(2 + S(n-1));
}

int main(){
	int n ; cin >> n ; 
	cout << roundf(S(n) * 1000 ) / 1000  ; 
}
