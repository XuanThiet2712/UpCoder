#include <iostream>
using namespace std ; 
struct SV{
	string hoten ; 
	float mon1 , mon2 , mon3 ; 
};
//nhap xuat
istream& operator >> (istream& in , SV &x){
	getline(in , x.hoten);
	in >> x.mon1 >> x.mon2 >> x.mon3 ; 
	return in ; 
}
ostream& operator << (ostream& out , SV x){
	return out ; 
}

bool operator < (SV x , SV y){
	return (x.mon1 + x.mon2 + x.mon3)/3 < (y.mon1 + y.mon2 + y.mon3)/3 ; 
}
int main(){
	SV sv[100];
	cin >> sv[0] ; 
	int idx = 0 ; 
	cin.ignore();
	int i = 1 ; 
	while (cin >> sv[i]){
		if(sv[idx] < sv[i] ) 
			idx = i ; 
		i++;
		cin.ignore();
	}
	cout << sv[idx].hoten;
}
