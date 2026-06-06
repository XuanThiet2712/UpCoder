#include <iostream>
using namespace std; 
int main(){
	long long n ; 
	cin >> n ; 
	int day = 0 ; 
	while(n < 1000000000){
		day++;
		n *= 2 ; 
	}
	cout << day ; 
}
