#include <iostream>
#include <string>
#include <ctype.h>
#include <algorithm>
using namespace std ; 
int main(){
	string  T , P ; 
	getline(cin , T ) ; 
	getline(cin , P ) ; 
	int cnt = 0 ; 
	size_t pos = T.find(P) ; 
	while(pos != string::npos){
		cnt++ ; 
		pos = T.find(P , pos + 1) ;
	}
	cout << cnt ; 
}
