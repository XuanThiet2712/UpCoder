#include <iostream>
#include <string>
#include <sstream>
using namespace std ; 
int main(){
	string s ; 
	getline(cin , s ) ; 
	stringstream ss(s) ; 
	int count = 0 ; 
	string tmp ; 
	while(ss >> tmp){
		count++;
	}
	cout << count ;
}
