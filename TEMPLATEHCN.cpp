#include <iostream>
#include <iomanip>
using namespace std ; 
struct HCN{
	float a , b ;
	friend istream& operator >> (istream& in , HCN &x ){
		in >> x.a >> x.b ; 
		return in ; 
	}
	friend ostream& operator << (ostream& out , HCN x){
		out << "[HCN] "<<x.a<<","<<x.b;
		return out ; 
	}
	float CV(){
		return (a+b)*2;
	}
	bool operator < (HCN y){
		return CV() < y.CV() ; 
	}
	float operator + (float y){
		return CV() + y ; 
	}
};
template<typename T>
struct Array{
	int n = 0 ; 
	T a[100] ;
	float sum = 0 ; 
	void nhap(){
		while(cin >> a[n]){
			n++;
		}
	}
	void xuat(){
		T Min1 = a[0]  ; 
		if(n == 1) sum = a[0] + 0; 
		else{
			for(int i=0;i<n;i++){
				if(a[i] < Min1) Min1 = a[i] ; 
				sum = a[i] + sum  ; 
			}
		}
		
		cout << Min1 << endl ; 
		
	}
};
int main(){
	char c ; cin >> c ; 
	if ( c == 'N'){
		Array<int> N ; 
		N.nhap();
		N.xuat();
		cout <<N.sum ; 
	}
	else{
		Array<HCN> H ; 
		H.nhap();
		H.xuat();
		cout <<fixed<<setprecision(1)<< H.sum  ;
	}
}
