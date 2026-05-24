#include <bits/stdc++.h>
using namespace std ; 
int main(){
	string mTP[6] = {"04" , "08" , "059" , "061" , "0511" , "0710"};
	string tenTP[6] = {"Ha Noi" , "TPHCM" , "Gia Lai" , "Da Nang" , "Can Tho"};
	string sdt ; cin >> sdt ; 
	string tmp = sdt.substr(0,3);
	bool valid = false ; 
	for(int i=0;i<6;i++){
		if(tmp.size() != mTP[i].size()) continue ; 
		if(tmp == mTP[i]){
			cout << tenTP[i] << " - " << sdt.substr(mTP[i].size());
			valid = true ; 
			return 0 ; 
		}
	}
	if(!valid) cout << "Khong hop le" ; 
}
