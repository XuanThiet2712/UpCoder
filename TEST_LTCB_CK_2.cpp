#include <iostream>
using namespace std;

int main() {
	int a[300];
	int n = 0;
	int tmp;	
	while (cin >> tmp) {		
		for (int i = 0; i < n; i++) {
			if (tmp == a[i])
				goto duplicate; 
		}		
		a[n++] = tmp; 		
		duplicate:;
	}
	
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
