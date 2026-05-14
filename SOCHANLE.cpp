#include <iostream>
using namespace std ; 

struct CHUSOCHAN{
	int n ; 
	int value[10] ; 
	int m ; 
	void valueCSC(){
		int x = n ; 
		m = 0 ; 
		while(x > 0){
			value[m] = ( x % 10) ; 
			m++;
			x /= 10 ; 
		}
	}
};
istream& operator >> (istream& in , CHUSOCHAN &x) {
	in >> x.n ; 
	x.valueCSC();
	return in ; 
}
ostream& operator << (ostream &out , CHUSOCHAN x){
	for(int i=x.m - 1 ;i>=0;i-=2){
		out << x.value[i];
	}
	return out ; 
}

bool operator < (CHUSOCHAN a , CHUSOCHAN b){
	if (a.m > b.m ) return true ; 
	for(int i= a.m - 1;i>=0 ;i--){
		if(a.value[i] < b.value[i] ) return true ; 
		else if (a.value[i] > b.value[i]) return false ;
	}
	return false ; 
}

int tongThanhPhan(CHUSOCHAN a , int b = 0){
	int sum = 0 ; 
	if(b == 0){
		for(int i=a.m-1;i>=0;i-=2){
			sum += a.value[i] ; 
		}
	}
	else {
		for(int i=a.m-1;i>=0;i-=2)){
			sum += a.value[i] ; 
		}
	}
	return sum ; 
}
int main(){
	CHUSOCHAN a , b  ; 
	cin >> a >> b  ;
	cout << a << endl << b ;
	cout << endl <<( (a < b) ? "true" : "false" )<<endl;
	int choi ; 
	cin >> choi ; 
	cout << tongThanhPhan(a , choi) << endl ;
	cout << tongThanhPhan(b , choi) ;
	
}
