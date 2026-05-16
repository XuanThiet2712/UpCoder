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
bool operator == (PhanSo x , PhanSo y){
	return x.tu * y.mau == x.mau * y.tu ; 
}

template<typename T>
string SS (){
	T a , b ;
	cin >> a >> b ;
	return a == b ? "true" : "false"; 
}

int main(){
	char c ; cin >> c ; 
	switch(c){
	case 'a':
		cout << SS<int>();
		break;
	case 'b':
		cout << SS<float>();
		break;
	case 'c':
		cout << SS<PhanSo>();
		break;
	}
	
	
}
