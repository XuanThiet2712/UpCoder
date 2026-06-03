#include <iostream>
#include <iomanip>
using namespace std ; 
template <typename T>
T MAX(){
	T x ; cin >> x ; 
	T m = x ; 
	while(cin >> x ){
		if(m < x ) m = x ; 
	}
	return m  ; 
}

int main(){
	char c ; cin >> c ; 
	if(c == 'a') cout <<MAX<int>();
	else if(c == 'b') cout <<fixed <<setprecision(2)<< MAX<double>();
	else if(c == 'c') cout << MAX<char>() ; 
}
