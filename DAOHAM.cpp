#include <bits/stdc++.h>
using namespace std;

struct DT {
	float heso;
	int bac;
};
istream& operator>>(istream& in, DT &x) {
	in >> x.heso;
	return in;
}
ostream& operator<<(ostream& out, DT x) {
	if (x.heso == 0) return out;
	
	if (x.bac == 0) {
		out << x.heso;
	}
	else {
		if (x.heso == -1)
			out << "-";
		else if (x.heso != 1)
			out << x.heso;
		
		if (x.bac == 1)
			out << "x";
		else
			out << "x^" << x.bac;
	}
	
	return out;
}

void DaoHam(vector<DT> &v) {
	vector<DT> tmp;
	
	for (auto x : v) {
		if (x.bac > 0) {
			x.heso *= x.bac;
			x.bac--;
			tmp.push_back(x);
		}
	}
	
	v = tmp;
}

int main() {
	int n, k;
	cin >> n;
	
	vector<DT> v(n);
	
	for (int i = 0; i < n; i++)
		cin >> v[i];
	
	for (int i = 0; i < n; i++)
		cin >> v[i].bac;
	
	cin >> k;
	
	sort(v.begin(), v.end(), [](DT a, DT b) {
		return a.bac < b.bac; 
	});
	
	double sum = 0;

	for (int i = 0; i < n; i++) {
		sum += v[i].heso * pow(k, v[i].bac);		
		if (i > 0) cout << " + ";
		cout << v[i];
	}	
	cout << "\n" << sum << "\n";
	
	DaoHam(v);
	
	for (int i = 0; i < (int)v.size(); i++) {
		if (i > 0) cout << " + ";
		cout << v[i];
	}
	
	return 0;
}
