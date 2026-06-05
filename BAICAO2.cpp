#include <bits/stdc++.h>
using namespace std; 
int tinhDiem(vector<string> v){
	int res = 0 ; 
	int jqk = 0 ; 
	for(int i = 0 ; i < 3 ; i++){
		if(v[i] == "J" || v[i] == "Q" || v[i] == "K")
			jqk+=10;
		else if (v[i] == "A")
			res += 1 ; 
		else 
			res += stoi(v[i]) ; 
	}
	if(jqk == 30 ) 
		return 30 ; 
	else 
		return (res + jqk ) % 10 ; 
}

int main() {
	vector<string> a[6];
	string user[6] = {"DAU" , "Su", "Lu", "Bu", "Ti", "Teo"};
	long long money[6] = {100 , 100 , 100 , 100 , 100 , 100 };
	int n ; cin >> n ; // nhap so van choi
	while(n--){
		for (int i = 0; i < 6; i++) {
			string x, y, z;
			cin >> x >> y >> z;
			a[i].push_back(x);
			a[i].push_back(y);
			a[i].push_back(z);
		}
		int DiemDau = tinhDiem(a[0]);
		for(int j=1 ; j < 6 ; j++){
			if(DiemDau > tinhDiem(a[j]))
				money[0] += 10 , 
				money[j] -= 10 ; 
			else if (DiemDau < tinhDiem(a[j]))
				money[0] -= 10 ,
				money[j] += 10 ; 
		}
		string x ;
		cin.ignore();
		getline(cin , x ) ; 
		for(int i=0;i<6;i++){
			a[i].clear();
		}
	}	
	cout <<"Dau : ";
	if(money[0] > 100 ) cout <<"Thang "<<(money[0] - 100) * 1000 << endl ; 
	else if(money[0] < 100 ) cout <<"Thua "<<(100 - money[0]) * 1000 << endl ; 
	else cout << "Hoa\n";
	for (int i = 1; i < 6; i++) 
		cout << user[i] <<" : "<<money[i] * 1000 << endl ; 
	return 0;
}
