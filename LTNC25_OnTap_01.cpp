#include <iostream>
#include <iomanip>
using namespace std ; 
#define PI 3.14
int main(){
	double r , a , b ;
	cin >> r >> a >> b ; 
	cout <<fixed<<setprecision(2)<<PI * r * r << endl ; 
	cout <<fixed<<setprecision(2)<<a * b ; 
}
