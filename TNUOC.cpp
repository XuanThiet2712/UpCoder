#include <iostream>
using namespace std;

int main() {
	int sd, money = 0; 
	cin >> sd;
	
	if (sd <= 16) 
		money = sd * 7000;
	else if (sd <= 50) 
		money = (sd-16)*8500 + 16*7000;
	else 
		money = (sd-50)*100000 + 34*8500 + 16*7000;	
	cout << money;
	return 0;
}
