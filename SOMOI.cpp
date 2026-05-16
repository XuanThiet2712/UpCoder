#include <iostream>
using namespace std ; 
struct SoMoi{
	int A ;
	int tong(){
		int x = A ; 
		int sum = 0 ; 
		while(x > 0){
			sum += x%10 ;
			x/=10;
		}
		return sum ; 
	}
};
istream& operator >> (istream& in , SoMoi &x){
	in >> x.A ;
	return in ; 
}
ostream& operator << (ostream& out , SoMoi x){
	out <<"[SoMoi] "<<x.A;
	return out ; 
}
bool operator > (SoMoi a , SoMoi b){
	return a.tong() > b.tong() ;
}
SoMoi operator + (SoMoi a , SoMoi b){
	SoMoi kq ;
	kq.A = a.tong() + b.tong() ;
	return kq ; 
}

int main(){
	SoMoi a , b ; 
	cin >> a >> b ; 
	cout << a << endl ;
	cout << b << endl ;
	cout << ( a > b ? "true" : "false" ) << endl ; 
	cout << a + b ; 
}
