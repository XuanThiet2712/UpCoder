#include <iostream>
#include <algorithm>
using namespace std; 
struct PhanSo{
	int tu , mau ; 
	void nhap(){
		cin >> tu >> mau ; 
	}
	void xuat(){
		if(tu == 0 ) cout <<0<< endl ; 
		else
		cout << tu << "/" << mau <<endl;
	}
	void rutgon(){
		int a = abs(tu);
		int b = abs(mau);
		while(b != 0){
			int r = a % b ;
			a = b ; 
			b = r ;
		}
		tu /= a ;
		mau /= a ;
	}
	
};

PhanSo tong(PhanSo a , PhanSo b){
	PhanSo kq ; 
	kq.tu = a.tu * b.mau + a.mau * b.tu ; 
	kq.mau = a.mau * b.mau ; 
	kq.rutgon();
	return kq ; 
}
PhanSo hieu(PhanSo a , PhanSo b){
	PhanSo kq ; 
	kq.tu = a.tu * b.mau - a.mau * b.tu ; 
	kq.mau = a.mau * b.mau ; 
	kq.rutgon();
	return kq ; 
}
PhanSo tich(PhanSo a , PhanSo b){
	PhanSo kq ; 
	kq.tu = a.tu * b.tu ;  
	kq.mau = a.mau * b.mau ; 
	kq.rutgon();
	return kq ; 
}
PhanSo thuong(PhanSo a , PhanSo b){
	PhanSo kq ; 
	kq.tu = a.tu * b.mau ;  
	kq.mau = a.mau * b.tu ; 
	kq.rutgon();
	return kq ; 
}

int main(){
	PhanSo a , b ; 
	a.nhap() ; 
	b.nhap() ;
	if(a.mau == 0 || b.mau == 0) cout << -1 ; 
	else{
		tong(a,b).xuat();
		hieu(a,b).xuat();
		tich(a,b).xuat();
		if(b.tu != 0){
			thuong(a,b).xuat();
		}
	}
}
