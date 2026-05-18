#include <iostream>
#include <algorithm>
using namespace std; 
struct PhanSo{
	int tu , mau ; 
	void nhap(){
		cin >> tu >> mau ; 
	}
	void xuat(){
		cout << tu << "/" << mau ;
	}
	void rutgon(){
		int gcd = __gcd(tu,mau);
		tu /= gcd ; 
		mau /= gcd ;
	}
	
};

PhanSo tong(PhanSo a , PhanSo b){
	PhanSo kq ; 
	kq.tu = a.tu * b.mau + a.mau * b.tu ; 
	kq.mau = a.mau * b.mau ; 
	kq.rutgon();
	return kq ; 
}
int main(){
	PhanSo p[100] ; 
	int n = 0 ; 
	while(cin >> p[n].tu >> p[n].mau){
		n++;
	}
	
	PhanSo kq = p[0];
	for (int i = 1 ; i < n ; i++){
		kq = tong(kq , p[i]) ; 
	}
	kq.xuat() ; 
	
}
