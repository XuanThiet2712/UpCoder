#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

struct SinhVien {
	char* hoten;
	int namSinh;
	float diem[3];
	
	void nhap() {
		hoten = new char[100];
		
		cin >> ws ; 
		
		cin.getline(hoten, 100);
		
		cin >> namSinh;
		
		for (int i = 0; i < 3; i++) {
			cin >> diem[i];
		}
	}
	
	double DTB() {
		return (diem[0] + diem[1] + diem[2]) / 3 ;
	}
	
	void xuat() {
		cout << hoten;
		cout << " - " << namSinh;
		cout << " - " << fixed << setprecision(2) << DTB();
	}
};

void NhapDSLSV(SinhVien a[], int n) {
	for (int i = 0; i < n; i++) {
		a[i].nhap();
	}
}

bool cmp(SinhVien a, SinhVien b) {
	return a.DTB() > b.DTB();
}

void DecreaseSV(SinhVien a[], int n) {
	sort(a, a + n, cmp);
}

void XuatDSLSV(SinhVien a[], int n) {
	for (int i = 0; i < n; i++) {
		cout <<i+1 << " - " ;
		a[i].xuat();
		cout << endl;
	}
}

int main() {
	int n;
	cin >> n;
	
	SinhVien* LSV = new SinhVien[n];
	
	NhapDSLSV(LSV, n);
	
	DecreaseSV(LSV, n);
	
	XuatDSLSV(LSV, n);
	
	delete[] LSV;
	
	return 0;
}
