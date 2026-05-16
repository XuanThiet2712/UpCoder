#include <iostream>
using namespace std ; 
template<typename T>
struct M1C{
	T a[100];
	int n ; 
	int tong(){
		int sum = 0 ; 
		for(int i=0;i<n;i++){
			sum += a[i];
		}
		return sum ; 
	}
	void nhap(){
		n = 0 ; 
		while(cin >> a[n]){
			n++;
		}
		
	}
	void xuat(){
		for(int i=0;i<n;i++){
			cout << a[i] << " ";
		}
	}
};

int main(){
	M1C<int> x ;
	x.nhap();
	cout << x.tong();
}
