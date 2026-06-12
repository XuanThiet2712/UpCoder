#include <bits/stdc++.h>
using namespace std ; 
struct DT{
	float heso ; 
	int bac ; 
};
istream& operator >> (istream& in , DT &x){
	in >> x.heso ;
	return in ; 
}
ostream& operator << (ostream& out , DT x){
	if(x.heso != 0 && x.heso != 1){
		out << x.heso ;
	}
	if(x.bac == 1)
	out << "x" ; 
	else if(x.bac > 1)
	out << "x^" << x.bac ;
	return out ; 
}

void DaoHam(vector<DT> &v){
	v.erase(v.begin());
	for(int i=0;i<v.size();i++){
		v[i].heso *= v[i].bac ;
		v[i].bac--;
	};
}

int main(){
	int n , k ; cin >> n ;
	vector<DT> v(n) ; 
	for (int i = 0 ; i < n ; i++){
		cin >> v[i] ; 
	}
	for (int i = 0 ; i < n ; i++){
		int x ;
		cin >> x ;
		v[i].bac = x ; 
	}
	cin >> k ;
	sort(v.begin() , v.end() , [](DT a , DT b){
		return a.bac < a.bac ;
	});
	double sum = 0 ; 
	for(int i = 0 ; i < n ; i ++ ){
		sum += v[i].heso * pow(k,v[i].bac);
		if(i > 0) cout << " + " ;
		cout << v[i] ;
	}
	cout << endl << sum << endl ; 
	DaoHam(v);
	for(int i = 0 ; i < v.size() ; i ++ ){
		if(i > 0) cout << " + " ;
		cout << v[i] ;
	}
}
