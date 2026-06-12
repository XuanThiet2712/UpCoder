#include <iostream>
#include <vector>
using namespace std;
int n , s , res(0);
int a[100] ; 
vector<int> v ;
void Try(int i){
	if(res == s){
		for(int x : v)
			cout << x << " ";
		cout << endl;
		return;
	}	
	if(i == n) return;	
	if(res + a[i] <= s){
		res += a[i];
		v.push_back(a[i]);
		
		Try(i + 1);
		
		res -= a[i];
		v.pop_back();
	}	
	Try(i + 1);
}

int main(){
	cin >> n >> s ; 
	for (int i = 0 ; i < n ; i++)
		cin >> a[i] ; 
	Try(0);
}
