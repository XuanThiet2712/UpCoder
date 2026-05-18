#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

struct SinhVien {
	char* hoTen;
	int namSinh;
	float diem[3];
	
	void nhap() {
		hoTen = new char[100];
		
// 		cin.ignore();
// 		fgets(hoTen , 100 , stdin);
// 		hoTen[strcspn(hoTen , "\n")] = ' ';
		cin >> ws ;
		cin.getline(hoTen, 100);
		cin >> namSinh;
		cin.ignore();
		for (int i = 0; i < 3; i++) {
			cin >> diem[i];
		}
	}
	
	float DTB() {
		return (diem[0] + diem[1] + diem[2]) / 3 ;
	}
	
	void xuat() {
		cout << hoTen;
		cout << " - " << namSinh;
		cout << " - " << fixed << setprecision(2) << DTB();
	}
};

void NhapDSLSV(SinhVien a[], int n) {
	for (int i = 0; i < n; i++) {
		a[i].nhap();
	}
}

// bool cmp(SinhVien a, SinhVien b) {
// 	return a.DTB() > b.DTB();
// }

void DecreaseSV(SinhVien *a, int n) {
// 	sort(a, a + n, cmp);
	for (int i = 0 ; i < n ; i++){
		for (int j = i ; j < n ; j++){
			if(a[i].DTB() < a[j].DTB()) swap(a[i] , a[j]) ; 
		}
	}
}

void XuatDSLSV(SinhVien *a, int n) {
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
