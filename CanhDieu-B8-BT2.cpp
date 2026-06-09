#include <iostream>
#include <iomanip>
using namespace std; 
int main(){
	double n; cin >> n ; 
	if(n <= 0) {
		cout << "Số tiền gửi phải lớn hơn 0.";
		return 0 ; 
	}
	for(int i = 1 ; i <= 10 ; i++){
		n = n + n * 5 / 100 ; 
		cout << "Năm "<<i<<": "<<setprecision(2)<<fixed<<n<<" triệu đồng\n";
	}
}
