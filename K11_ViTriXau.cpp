#include <iostream>
#include <string>
using namespace std  ; 
int main(){
	string A , B ; 
	getline(cin , A);
	getline(cin , B);
	int a = find(A,B);
	cout << a ; 
}
