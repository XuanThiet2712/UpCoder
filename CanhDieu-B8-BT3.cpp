#include <iostream>
#include <iomanip>
using namespace std; 
int main(){
	double n; cin >> n ; 
	if(n <= 0) {
		cout << "Không hợp lệ.";
		return 0 ; 
	}
	for(int i = n ; i >= 1 ; i--){
		cout << i << endl ; 
	}
	cout << ">>>" ; 
}
