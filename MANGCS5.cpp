#include <iostream>
#include <cmath>
using namespace std ; 
int main(){
	int sum = 0 ; 
	double x ; 
	while(cin >> x ){
		if(sqrt(x) == (int)sqrt(x)){
			sum += x ;
		}
	}
	cout << sum ; 
}
