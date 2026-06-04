#include <iostream>
using namespace std;
struct COLORED_POINT{
	int x , y ; 
	string code ;
};
istream& operator >> (istream& in , COLORED_POINT &p){
	in >> p.x >> p.y >> p.code ;
	return in ;
}
ostream& operator << (ostream& out , COLORED_POINT p){
	out <<"("<<p.x<<","<<p.y<<",#"<<p.code<<")";
	return out ; 
}

int main(){
	int n ; cin >> n ; 
	int cnt(0) ; 
	COLORED_POINT *a = new COLORED_POINT[n] ; 
	for(int i = 0 ; i < n ; i++)
		cin >> a[i] ; 
	for(int i = 0 ; i < n ; i++){
		cout << a[i] << " " ; 
		if(a[i].code == "5DC3A8") cnt++;
		if(a[i].x > a[i].y) a[i].code = "1F00F3" ; 
	}
	cout << endl << cnt << endl ; 
	for(int i = 0 ; i < n ; i++)
		cout << a[i] << " " ; 
}
