#include"bt2.h"

int main() {
	int* p=NULL;
	int n;
	cout << "Nhap Gia Tri n="; cin >> n;
	CapPhat(p, n);
	IN_DC(p,n);
	Huy(p, n);
	return 0;
}