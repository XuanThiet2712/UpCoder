#include <iostream>
using namespace std ; 
struct Oxy{
	int x , y ; 
	void nhap(){
		cin >> x >> y ; 
	}
};
int main(){
	int n ; cin >> n ;
	Oxy a[n] ; 
	for (int i = 0 ; i < n ; i++){
		a[i].nhap();
	}
	int count = 0 ; 
	for (int i = 0 ; i < n ; i++){
		if(a[i].x == 0 || a[i].y == 0)
			count++;
	}
	cout << count ;
}
