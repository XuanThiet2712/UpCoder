#include <iostream>
#include <vector>
using namespace std ; 
int main(){
	vector<char> v = {'a' , 'b' , 'c' , 'd' , 'e' , 'f'};
	int n ; cin >> n ; 
	for (int i = 1 ; i <= n ; i++){
		v.push_back(v.front());
		v.erase(v.begin());
	}
	for (char x : v){
		cout << x ;
	}
}
