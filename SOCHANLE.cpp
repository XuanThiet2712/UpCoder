#include <iostream>
using namespace std ; 

struct CHUSOCHAN{
	int n ; 
	int value ; 
	int k1 ; 
	void valueCSC(){
		value = 0 ; 
		int x = n ; 
		int k = 1 ; 
		while(x > 0){
			x /= 10 ; 
			if (x <= 0) break ; 
			k *= 10 ; 
		}
		k1 = k ;
		x = n  ; 

		while(x > 0){
			value = value * 10 + x/k ;
			k /= 10 ;
			x = x % k  ; 
			k /= 10 ; 
		}
	}
};
istream& operator >> (istream& in , CHUSOCHAN &x) {
	in >> x.n ; 
	x.valueCSC();
	return in ; 
}
ostream& operator << (ostream &out , CHUSOCHAN x){
	out << x.value ;
	return out ; 
}

bool operator < (CHUSOCHAN a , CHUSOCHAN b){
	return a.value < b.value ;
}

int tongThanhPhan(CHUSOCHAN a , int b = 0){
	int sum = 0 ; 
	int x = a.n ; 
	if(b == 0){
		while(x > 0){
			sum += (x / a.k1 );
			if(x < 100 ) break ; 
			x %= 100 ;
			a.k1 /= 100 ;
		}
	}
	else{
		x %= a.k1; 
		a.k1 /= 10 ;
		while(x > 0){
			sum += (x / a.k1);
			if(x < 100) break ; 
			x %= 100 ; 
			a.k1 /= 100 ;
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
	cout << tongThanhPhan(a , choi);
	
}
