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

bool cmpBE(PhanSo a , PhanSo b){
	return a.tu * b.mau < a.mau * b.tu ; 
}
int main(){
	int n ; cin >> n ; 
	PhanSo p[n] ; 
	for (int i = 0 ; i < n ; i++){
		p[i].nhap();
	}
	PhanSo Min1 = p[0];
	for(int i=1;i<n;i++){
		if(cmpBE(p[i] , Min1)) Min1 = p[i] ;
	}
	Min1.rutgon();
	Min1.xuat();
	
}
