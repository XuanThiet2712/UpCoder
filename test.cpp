#include <iostream>
using namespace std ; 
int main(){
	int n = 10 ; 
	const int *p = &n ;
	n+=5 ; 

	cout << *p << endl ; 
	*p += 10 ; 
	cout << *p << endl ; 
}
