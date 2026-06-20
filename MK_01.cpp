#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;  
int main(){
	string s , tmp ; 
	getline(cin , s ) ;
	transform(s.begin() , s.end() , s.begin() , ::tolower) ;
	stringstream ss(s) ; 
	while(ss >> tmp){
		tmp[0] = toupper(tmp[0]); 
		cout << tmp << ' ' ; 
	}
}
