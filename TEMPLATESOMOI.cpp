#include <iostream>
#include <cmath>
using namespace std ; 
struct SoMoi{
	int A = 0 ;
	int tong(){
		int x = abs(A) ; 
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
SoMoi operator + (SoMoi a , int b){
	SoMoi kq ;
	kq.A = a.tong() + b ;
	return kq ; 
}
bool operator == (SoMoi a , SoMoi b){
	return a.tong() == b.tong() ;
}


template<class T>
struct Array{
	int n ;
	T a[100];
	void nhap(){
		while(cin >> a[n]){
			n++;
		}
	}
	
	void xuat(){
		T Max1 = a[0] , sum = a[0] ;
		
		int count = 0 ;
		if (n == 1) sum = sum + 0 ; 
		for(int i=1;i<n;i++){
			if(a[i] > Max1) {
				Max1 = a[i];
			}
			sum = sum + a[i] ; 
		}
		for(int i=0;i<n;i++){
			if ( Max1 == a[i]) count++;
		}
		cout << Max1 << endl ; 
		cout << count << endl ;
		cout << sum ; 
	}
	
};
int main(){

	char c ; cin >> c ;
	if ( c == 'N'){
		Array<int> x ; 
		x.nhap();
		x.xuat();
	}
	else{
		Array<SoMoi> y ; 
		y.nhap();
		y.xuat();
	}
}
