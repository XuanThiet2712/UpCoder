#include <iostream>
#include <stack>
using namespace std; 
void chuyenCoSo(long soHe10 , int heCoSoMoi){
	string c16 = "0123456789ABCDEF" ; 
	stack<char> st ; 
	while(soHe10 == 0 ){
		cout << 0 ; 
		return ; 
	}
	if ( heCoSoMoi == 0 ) {
		while(soHe10 > 0 ){
			st.push(c16[soHe10 % 2]) ;
			soHe10 /= 2 ; 
		}
	}
	else if (heCoSoMoi == 1 ){
		while(soHe10 > 0){
			st.push(c16[soHe10 % 8]) ;
			soHe10 /= 8 ;
		}
	}
	else if ( heCoSoMoi == 2 ){
		while( soHe10 > 0){
			st.push(c16[soHe10 % 16 ]) ; 
			soHe10 /= 16 ; 
		}
	}
	
	while(!st.empty()){
		cout << st.top() ;
		st.pop() ; 
	}
}

int main(){
	int n , x ; cin >> n >> x ;
	chuyenCoSo(n , x ) ; 
}
