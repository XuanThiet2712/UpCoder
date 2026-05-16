#include <iostream>
#include <algorithm>
using namespace std ; 
struct PhanSo{
	int tu , mau ; 
	void rutgon(){
		int ucln = __gcd(tu , mau ) ;
		tu /= ucln ; 
		mau /= ucln ; 
	}
};
istream& operator >> (istream& in  , PhanSo &x){
	in >> x.tu >> x.mau ; 
	return in ; 
}
ostream& operator << (ostream& out  , PhanSo x){
	out << x.tu <<"/"<< x.mau ; 
	return out ; 
}
PhanSo operator + (PhanSo x , PhanSo y){
	PhanSo kq ; 
	kq.tu = x.tu * y.mau + x.mau * y.tu ; 
	kq.mau = x.mau * y.mau ;
	kq.rutgon();
	return kq ; 
}

template<class T>
struct Array{
	int n ;
	T a[100];
	void nhap(){
		n = 0 ; 
		
		while(cin >> a[n]){
			n++ ; 
		}
	}
	
	void xuat(){
		T sum = a[0];
		for(int i=1;i<n;i++){
			sum = sum + a[i] ;
		}
		cout << sum ; 
	}
	

};
int main(){
	char c ; cin >> c ;
	if (c == 'a'){
		Array<int> x ; 
		x.nhap();
		x.xuat();
	}
	else if(c == 'b'){
		Array<PhanSo> x ; 
		x.nhap();
		x.xuat();
	}
}
