#include <iostream>
#include <cmath>
using namespace std ;

int n ; 
double S(int k){
	if(n == k ) return sqrt(n) ; 
	return sqrt(k + S(k+1));
}

int main(){
	cin >> n ; 
	cout << roundf(S(1) * 1000 ) / 1000  ; 
}
