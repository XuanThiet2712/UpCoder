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
int main(){
	ToaDo v ;
	cin >> v ;
	cout << v ; 
}
