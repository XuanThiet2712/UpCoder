#include <bits/stdc++.h>
using namespace std ; 
bool P(int n){
	string s = to_string(n) ; 
	string rs = s ; 
	reverse(rs.begin() , rs.end()) ; 
	return s == rs ; 
}
int main(){
	int n , m ; cin >> n ;
	while(n--){
		cin >> m ; 
		if(P(m))
			cout << m<< " " ;
	}
}
