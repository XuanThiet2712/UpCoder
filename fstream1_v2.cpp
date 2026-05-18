#include <iostream>
#include <fstream>
using namespace std; 
int main(){
	ifstream fin("input.txt");
	int a , b ; 
	fin >> a >> b ; 
	cout << a + b ; 
	fin.close();
}
