#include <bits/stdc++.h>
using namespace std;

int main(){
	string s ; getline(cin , s) ; 
	stringstream ss(s) ; 
	string tmp ; 
	int count = 0 ; 
	while(ss >> tmp){
		count ++ ; 
	}
	ss.clear();
	ss.str(s);
	if(count <= 3){
		while(ss >> tmp ){
			cout << tmp << endl ; 		
		}
	}
	else{
		int x = 1 ; 
		while(ss >> tmp ){
			cout << tmp ;
			if(x == 1 || x == count) cout << endl ; 
			x++ ;
		}
	}
}
