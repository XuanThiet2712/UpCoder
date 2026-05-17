#include <iostream>
#include <cmath>
using namespace std ; 
struct Oxy{
	double x , y ;
};
istream& operator >> (istream& in , Oxy &a){
	in >> a.x >> a.y ; 
	return in ; 
}
ostream& operator << (ostream& out , Oxy a){
	out <<"("<<a.x<<", "<<a.y<<")";
	return out ; 
}
double operator - (Oxy a, Oxy b){
	Oxy ab = {b.x - a.x , b.y - a.y};
	return sqrt(ab.x * ab.x + ab.y * ab.y);
}

bool operator < (Oxy a , Oxy b){
	if(a.x < b.x) return true ;
	if(a.x == b.x && a.y < b.y) return true ; 
	return false ;
}

struct Oxyz{
	Oxy xy ;
	double z ; 
};
istream& operator >> (istream& in , Oxyz &a){
	in >> a.xy >> a.z ;
	return in ; 
}
ostream& operator << (ostream& out , Oxyz a){
	out <<"("<<a.xy.x<<", "<<a.xy.y<<", "<<a.z<<")";
	return out ; 
}
double operator - (Oxyz a, Oxyz b){
	Oxyz ab = {{b.xy.x - a.xy.x , b.xy.y - a.xy.y} , b.z - a.z};
	return sqrt(ab.xy.x * ab.xy.x + ab.xy.y * ab.xy.y + ab.z * ab.z);
}

bool operator < (Oxyz a , Oxyz b){
	if(a.xy < b.xy) return true ; 
	if(a.xy.x == b.xy.x && a.xy.y == b.xy.y && a.z < b.z) return true ; 
	return false ;
}

template<typename T>
struct Array{
	int n = 0 ; 
	T a[100] ; 
	double DistanceMax(){
		double dis = 0 ;
		for(int i=0;i<n;i++){
			for(int j = i ;j < n ;j++){
				double x = a[i] - a[j] ;
				if(dis < x){
					dis = x ; 
				}
			}
		}
		return roundf(dis * 1000) / 1000 ;
	}
	void IncreaseSort(){
		for(int i = 0 ; i < n ; i++){
			for(int j=i;j<n;j++){
				if(a[j] < a[i]) swap(a[i] , a[j]) ;
			}
		}
	}
	void DecreaseSort(){
		for(int i = 0 ; i < n ; i++){
			for(int j=i;j<n;j++){
				if(a[i] < a[j]) swap(a[i] , a[j]) ;
			}
		}
	}
	friend istream& operator >> (istream& in , Array &x){
		in >> x.a[x.n];
		x.n++;
		return in ; 
	}
	
	friend ostream& operator << (ostream& out , Array x){
		for(int i=0;i<x.n;i++){
			out <<x.a[i]<<" ";
		}
		return out ; 
	}
};

int main(){
	Array<Oxy> oxy ; 
	Array<Oxyz> oxyz ; 
	string s ;
	while(cin >> s){
		if (s == "Oxy"){
			cin >> oxy ;
		}
		else {
			cin >> oxyz ;
		}
	}
	oxy.IncreaseSort() ; 
	oxyz.DecreaseSort() ; 
	cout << oxy << endl ; 
	cout << oxyz << endl ; 
	cout << oxy.DistanceMax() << endl ; 
	cout << oxyz.DistanceMax() ; 
}
