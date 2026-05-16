#include <iostream>
#include <algorithm>
using namespace std ; 
struct PhanSo{
	int tu , mau ; 
};
istream& operator >> (istream& in  , PhanSo &x){
	in >> x.tu >> x.mau ; 
	return in ; 
}
ostream& operator << (ostream& out  , PhanSo x){
	out << x.tu <<"/"<< x.mau ; 
	return out ; 
}
bool operator < (PhanSo x , PhanSo y){
	return x.tu * y.mau < x.mau * y.tu ; 
}

template<class T>
struct Array{
	int n = 0; 
	T a[100];
	void nhap(){
		cin >> a[n++] ;
	}
	
	T Min(){
		T min1 = a[0];
		for (int i = 1 ; i < n ; i++){
			if (a[i] < min1 ) 
				min1 = a[i] ;
		}
		return min1;
	}
	
	void xuat(){
		if(n == 0){
			cout << "khong co\n" ; 
		}
		else{
			cout << Min() << endl ; 
		}
	}
};
int main(){
	Array<int> a ;
	Array<float> b ;
	Array<PhanSo> c ;
	char type ;
	while(cin >> type){
		if(type == 'a'){
			a.nhap();
		}
		else if(type == 'b'){
			b.nhap();
		}
		else if(type == 'c'){
			c.nhap();
		}
	}

	a.xuat() ;

	b.xuat() ;

	c.xuat();
	
}
