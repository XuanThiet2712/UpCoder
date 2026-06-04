#include <iostream>
#include <iomanip>
using namespace std ; 
struct ToaDo{
	double x , y ; 
};
istream& operator >> (istream& in , ToaDo &v){
	in >> v.x >> v.y ;
	return in ; 
}
ostream& operator << (ostream& out , ToaDo v){
	out << "("<<setprecision(2)<<fixed<<v.x<<", "<<v.y<<")";
	return out ; 
}
ToaDo operator + (ToaDo a , ToaDo b){
	return {a.x + b.x , a.y + b.y} ;
}
ToaDo operator - (ToaDo a , ToaDo b){
	return {a.x - b.x , a.y - b.y} ;
}
bool operator == (ToaDo a , ToaDo b ){
	return a.x == b.x && a.y == b.y ;
}
ToaDo operator ++ (ToaDo &a){
	return {++a.x , ++a.y} ; 
}
ToaDo operator -- (ToaDo &a){
	return {--a.x , --a.y} ; 
}
ToaDo operator ++ (ToaDo &a , int){
	ToaDo temp = a ; 
	a.x++;
	a.y++;
	return temp ; 
}
ToaDo operator -- (ToaDo &a , int){
	ToaDo temp = a ; 
	a.x--;
	a.y--;
	return temp ; 
}
bool operator > (ToaDo a , ToaDo b) {
	if(a.x > b.x) return true ; 
	if(a.x == b.x && a.y > b.y) return true ;
	return false ; 
}

struct mangToaDo{
	ToaDo a[10] ;
	int n ; 
	ToaDo &operator [] (int index) {
		return a[index] ; 
	}
};
istream& operator >> (istream& in , mangToaDo &x){
	in >> x.n ; 
	for(int i = 0 ; i < x.n ; i++)
		in >> x[i] ; 
	return in ; 
}
ToaDo toaDoLonNhat(mangToaDo x){
	ToaDo m = x[0] ; 
	for(int i = 1 ; i < x.n ; i++){
		if(x[i] > m) m = x[i] ; 
	}
	return m ; 
}
ToaDo tongToaDo(mangToaDo x){
	ToaDo sum = x[0] ; 
	for(int i = 1 ; i < x.n ; i++){
		sum = sum + x[i] ; 
	}
	return sum ; 
}

int main(){
	mangToaDo a ; 
	cin >> a ; 
	cout << toaDoLonNhat(a) << endl ; 
	cout << tongToaDo(a)  ;
}
