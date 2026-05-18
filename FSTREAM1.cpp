#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std ; 
int main(){
	freopen("FSTREAM.inp" , "r" , stdin);	
	freopen("FSTREAM.out" , "w" , stdout);
	int n ; cin >> n ; 
	int can = sqrt(n) ; 
	cout << (can * can == n ? "YES" : "NO");

}
