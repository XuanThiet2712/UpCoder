#include <iostream>
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

int main(){
	HCN x , y ; 
	cin >> x >> y ;
	cout << x << endl << y << endl ; 
	cout << ( x < y ? "true" : "false");
}
