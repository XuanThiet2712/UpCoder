#include <iostream>
#include <cmath>
using namespace std ; 

int S(int n , int x){
	if(n == 0) return 1 ;	
	return pow(x , n) + S(n - 1 , x ) ; 
}

int main(){
	int n , x ; cin >> n >> x ; 
	cout << S(n , x) ; 
}
