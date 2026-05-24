#include <iostream>
#include <string>
#include <sstream>
using namespace std ; 
int main(){
	string s ; 

	while(getline(cin , s)){
		int count(0) ; 
		stringstream ss(s) ;
		string tmp ; 
		while(ss >> tmp){
			count++;
		}
		cout << count << endl ; 
	}
}
