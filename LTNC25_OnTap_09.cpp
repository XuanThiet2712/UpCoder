#include <iostream>
#include <fstream>
#include <cmath>
using namespace std ; 
bool isSquareNumber(int n){
	return (int)sqrt(n) == sqrt(n) ; 
}
int main(){
	int x ;
	ifstream fin("input.txt") ; 
	while(fin >> x){
		if(isSquareNumber(x)) cout << x << " " ; 
	}
	fin.close();
}
