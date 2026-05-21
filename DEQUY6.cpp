#include <iostream>
#include <cmath>
using namespace std ; 

double gt(int n ){
	if(n == 1 || n == 0 ) return 1 ; 
	return n * gt(n - 1) ; 
}

double S(int n , int x){
	if(n < 0 ) return 0 ;	
	
	return pow(-1 , n) * pow(x , 2*n + 1 )/gt(2*n + 1) +  S(n - 1 , x )  ; 
}

int main(){
	int n , x ; cin >> n >> x ; 
	cout <<roundf(S(n , x) * 1000) / 1000 ; 
}
