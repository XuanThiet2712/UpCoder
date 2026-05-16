#include <iostream>
using namespace std; 
struct SoDao{
	int n ; 
	int tinhValue() const{
		int value = 0;
		int x = n ; 
		while(x > 0){
			value = value * 10 + x%10;
			x /= 10 ; 
		}
		return value ; 
	}
//	operator int() const{
//		return tinhValue();
//	}
};

istream& operator >> (istream& in , SoDao &x){
	in >> x.n ; 
	return in ; 
}
ostream& operator << (ostream& out , SoDao x){
	out <<"[SoDao] "<<x.n;
	return out;
}
bool operator > (SoDao x , SoDao y){
	return x.tinhValue() > y.tinhValue() ;
}
int operator + (SoDao x , int y){
	int kq = x.tinhValue() + y ;
	return kq ; 
}

template<class T>
struct Array{
	int n = 0 ; 
	T a[100];
	void nhap(){
		cin >> a[n++];
	}
	void xuat(){
		T Max = a[0];
		int sum = 0;
		for(int i=0;i<n;i++){
			if (a[i] > Max) Max = a[i] ;
			sum = a[i] + sum ;
		}
		if (n == 0) cout <<"khong co\nkhongco\n" ;
		else{
			cout <<sum<<endl;
			cout <<Max<<endl;
		}
	}
};

int main(){
	Array<int> z ; 
	Array<SoDao> sd ; 
	char c ; 
	while(cin >> c){
		if(c == 'T'){
			z.nhap();
		}
		else if (c == 'D'){
			sd.nhap();
		}
	}
	z.xuat();
	sd.xuat();
}
