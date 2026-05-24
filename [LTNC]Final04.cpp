#include <bits/stdc++.h>
using namespace std ; 
int main(){
	string mTP[6] = {"04" , "08" , "059" , "061" , "0511" , "0710"};
	string tenTP[6] = {"Ha Noi" , "TPHCM" , "Gia Lai" ,"Dong Nai" , "Da Nang" , "Can Tho"};
	string sdt ; cin >> sdt ; 
	bool isAlpha = any_of(sdt.begin(), sdt.end(), ::isalpha);
	if(isAlpha || sdt.size() != 10){
		cout << "Khong hop le" ;
		return 0 ; 
	}
	string tmp = sdt.substr(0,4);
	bool valid = false ; 
	for(int i=0;i<6;i++){
		size_t pos = tmp.find(mTP[i]) ;
		if(pos != string::npos && pos == 0 ){
			cout << tenTP[i] << " - " << sdt.substr(mTP[i].size());
			valid = true ; 
			return 0 ; 
		}
	}
	if(!valid) cout << "Khong hop le" ; 
}
