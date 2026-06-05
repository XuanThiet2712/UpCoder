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
	vector<string> a[5];
	string user[5] = {"Su", "Lu", "Bu", "Ti", "Teo"};
	for (int i = 0; i < 5; i++) {
		string x, y, z;
		cin >> x >> y >> z;
		a[i].push_back(x);
		a[i].push_back(y);
		a[i].push_back(z);
	}
	
	int maxDiem = 0;
	for (int i = 0; i < 5; i++) 
		maxDiem = max(maxDiem, tinhDiem(a[i]));
	
	for (int i = 0; i < 5; i++) 
		if (maxDiem == tinhDiem(a[i]))
			cout << user[i] << ' ';
	
	return 0;
}
