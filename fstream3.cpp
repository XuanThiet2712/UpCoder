#include <iostream>
#include <fstream>
using namespace std; 
int main(){
	ofstream fout("out.txt")	;
	int a , b ; 
	cin >> a >> b ; 
	fout << a + b ; 
	fout.close();
}
