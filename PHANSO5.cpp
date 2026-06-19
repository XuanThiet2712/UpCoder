#include <iostream>
using namespace std ; 
struct PhanSo{
	int tu , mau ; 
};
istream& operator >> (istream& in , PhanSo &x){
	in >> x.tu >> x.mau ; 
	return in ; 
}
ostream& operator << (ostream& out , PhanSo x){
	out << x.tu << "/" << x.mau ;
	return out ; 
}
PhanSo operator ++ (PhanSo &x){
	return {x.tu + 1 , x.mau } ; 
}
PhanSo operator -- (PhanSo &x){
	return {x.tu - 1 , x.mau } ; 
}
int main() {
	PhanSo a;
	string x;
	cin >> a >> x;
	cout << a << endl;
	cout << (x == "++" ? ++a : --a);
	return 0;
}
