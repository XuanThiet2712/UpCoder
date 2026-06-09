#include <iostream>
#include <iomanip>
using namespace std; 
int main(){
	double n; cin >> n ; 
	if(n <= 0) {
		cout << "Số tiền gửi phải lớn hơn 0.";
		return 0 ; 
	}
	double res ; 
	for(int i = 1 ; i <= 10 ; i++){
		res = n + n * 5 / 100 ; 
		cout << "Năm 1: "<<setprecision(2)<<fixed<<res<<" triệu đồng\n";
	}
}
