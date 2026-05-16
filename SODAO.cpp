#include <iostream>
using namespace std; 
struct SoDao{
	int n ; 
	int tinhValue(){
		int value = 0;
		int x = n ; 
		while(x > 0){
			value = value * 10 + x%10;
			x /= 10 ; 
		}
		return value ; 
	}
};

istream& operator >> (istream& in , SoDao &x){
	in >> x.n ; 
	return in ; 
}
ostream& operator << (ostream& out , SoDao x){
	out <<"[SoDao] "<<x.n;
	return out;
}
bool operator > (SoDao x , SoDao y){
	return x.tinhValue() > y.tinhValue() ;
}
int operator + (SoDao x, int z){
	int kq = x.tinhValue() + z ;
	return kq ; 
}
int main(){
	SoDao x , y ;
	cin >> x >> y ; 
	cout << x << endl << y << endl ; 
	cout << (x > y ? "YES" : "NO") << endl ; 
	int kq = x + 0 ; 
	kq = y + kq ;
	cout << kq ;
}
