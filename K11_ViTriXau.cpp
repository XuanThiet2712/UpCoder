#include <iostream>
#include <string>
using namespace std  ; 
int main(){
	string A , B ; 
	getline(cin , A);
	getline(cin , B);
	int pos = A.find(B);
	cout << (pos == string::npos) ? 0 : pos;
}
