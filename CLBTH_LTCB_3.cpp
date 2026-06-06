#include <iostream>
using namespace std;
int main(){
	long long a ,  n ; 
	cin >> a >> n ; 
	long long res = 1 ; 
	while(n--){
		res *= a ; 
	}
	cout << res ; 
}
