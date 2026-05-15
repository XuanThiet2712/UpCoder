#include <iostream>
using namespace std ;
int main(){
	int m , n ; 
	cin >> m >> n ; 
	int *A = new int [m] ; 
	int *B = new int [n] ;
	
	for(int i=0;i<m;i++){
		cin >> A[i] ;
	}
	for(int i=0;i<n;i++){
		cin >> *(B+i);
	}
	int count = 0 ; 
	bool isExist ; 
	for(int i=0;i<n;i++){
		isExist = false ; 
		for(int j=0;j<m;j++){
			if(A[j] == B[i]){
				isExist = true ; 
				break ; 
			}
		}
		if(!isExist){
			count++;
		}
	}
	cout << count ;
	delete[] A ;
	delete[] B ;
}
