#include"bt2.h"

void CapPhat(int*& p, int n) {
	p = new int[n];
	if (p == NULL)
		cout << "Khong cap dc o nho: ";

}
void IN_DC(int* p, int n) {
	for (int i = 0; i < n; i++)
		cout << p + i << "\t";
		
}
void Huy(int*& p, int n) {
	delete(p);
}