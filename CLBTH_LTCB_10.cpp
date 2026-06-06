#include <iostream>
using namespace std;

int main(){
	long long n ; 
	cin >> n ; 
	string np = "" ; 
	while(n > 0){
		int tmp = n % 2 ; 
		np += tmp + '0' ;  
		n/=2 ; 
	}
	for (int i = np.size() - 1  ; i >= 0 ; i-- )
		cout << np[i] ; 	
}
