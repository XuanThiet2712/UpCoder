#include <iostream>
#include <iomanip>
using namespace std ; 
template <typename T>
T Sum(){
	T sum = 0 ; 
	T x ; 
	while(cin >> x ){
		sum += x ; 
	}
	return sum ; 
}

int main(){
	char c ; cin >> c ; 
	if(c == 'a') cout << Sum<int>();
	if(c == 'b') cout <<fixed <<setprecision(2)<< Sum<double>();
}
