#include <bits/stdc++.h>
using namespace std ;

int valid = 0 ; 
struct KhachHang{
	string MKH ; 
	string TKH ; 
	int STDC ; 
};
istream& operator >> (istream& in , KhachHang &x){
	string s , tmp ; 
	getline(in , s) ;
	vector<string> v ; 
	stringstream ss(s);
	while(ss >> tmp ){
		if(tmp == "-") continue ;
		v.push_back(tmp) ; 
	}
	x.MKH = v.front() ; 
	x.TKH = "";
	int si =  stoi(v.back());
	x.STDC = si ; 
	if(si >= 0 ) valid++;
	for(int i = 1 ; i < v.size() - 1 ; i++)
		x.TKH += v[i] + " " ; 
	return in ; 	
}

ostream& operator << (ostream& out , KhachHang x){
	out << x.MKH <<" - " << x.TKH << " - " << x.STDC ; 
	return out ; 
}

bool operator > (KhachHang x , KhachHang y){
	return x.STDC > y.STDC ; 
}


int main(){
	int n ; cin >> n ;
	cin.ignore();
	KhachHang a[n] ; 
	for(int i = 0 ; i < n ; i++){
		cin >> a[i] ; 
	}
	cout << valid << endl ; 
	KhachHang x = a[0];
	for(int i=1;i<n;i++){
		if(a[i] > x) x = a[i] ; 
	}
	cout << x ; 
	
}
