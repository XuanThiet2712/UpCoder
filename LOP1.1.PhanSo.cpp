#include <iostream>
using namespace std ; 
class PhanSo{
	int tu , mau ; 
public :
	void nhap(){
		cin >> tu >> mau ; 
	}
	void xuat(){
		cout <<tu<<"/"<<mau;
	}
} p;
int main(){
	p.nhap() ; 
	p.xuat() ; 
}
