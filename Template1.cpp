#include <iostream>
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
bool operator > (PhanSo x , PhanSo y){
	return x.tu * y.mau > x.mau * y.tu ; 
}

template<typename T>
T Max (){
	T a , b , c ; 
	cin >> a >> b >> c ;
	if(a > b && a > c)
		return a ; 
	if(b > a && b > c)
		return b ; 
	return c ; 
}

int main(){
	char c ; cin >> c ; 
	switch(c){
	case 'a':
		cout << Max<int>();
		break;
	case 'b':
		cout << Max<float>();
		break;
	case 'c':
		cout << Max<PhanSo>();
		break;
	}

	
}
