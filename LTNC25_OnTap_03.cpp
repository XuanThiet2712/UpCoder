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
int main(){
	ToaDo a , b  ;
	cin >> a >> b ; 
	cout << a + b << endl ; 
	cout << a - b ; 
}
