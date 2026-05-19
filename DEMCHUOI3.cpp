#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
int main(){
	int n , q ; 
	cin >> n ; 
	vector<string> v(n) ; 
	for (string &s : v){
		cin >> s ; 
	}
	cin >> q ; 
	string s ; 
	while(q--){
		cin >> s ; 
		cout << count(v.begin() , v.end() , s) << endl ; 
	}
}
