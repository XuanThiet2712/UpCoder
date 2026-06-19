#include <iostream>
using namespace std ;
struct PS{
	int tu , mau ; 
	void rutgon(){
		int a = tu ; 
		int b = mau ; 
		while(b != 0){
			int r = a % b ; 
			a = b ;
			b = r ; 
		}
		tu /= a ; 
		mau /= a ;
	}
};
istream& operator >> (istream& in , PS &x){
	in >> x.tu >> x.mau ;
	return in ; 
}
ostream& operator << (ostream& out , PS x){
	out << x.tu << "/" <<x.mau ; 
	return out ; 
}
PS operator + (PS a , PS b ){
	PS kq ; 
	kq.tu = a.tu * b.mau + a.mau * b.tu ; 
	kq.mau = a.mau * b.mau ; 
	kq.rutgon() ; 
	return kq ; 
}
int main(){
	PS a , b ; 
	cin >> a >> b ; 
	cout << a + b ; 
}
