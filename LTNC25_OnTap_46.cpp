#include <bits/stdc++.h>
using namespace std;
int n ; 
int a[100] ; 
vector<int> cur ; 
bool used[100];
void Try(int pos){
	if(pos == n){
		cout << "(" ; 
		for(int i = 0 ; i < n ; i++ ){
			cout << cur[i] ; 
			if(i + 1 < n ) cout << " " ;
		}
		cout << ")\n";
		return ; 
	}
	for(int i = 0 ; i < n ; i++){
		if(!used[i]){
			used[i] = true ; 
			cur.push_back(a[i]);
			Try(pos+1); // vo dung :))
			cur.pop_back();
			used[i] = false ; 
		}
	}
}
int main(){
	cin >> n ; 
	for (int i = 0 ; i < n ; i++){
		cin >> a[i] ; 
	}
	sort(a, a + n); 
	Try(0);
}
