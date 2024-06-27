#include"bt1.h"
int main() {
	int* p;
	p = new int;
	if (p == NULL)
		cout << "Khong Cap Phat Dc O Nho";
	else{
		cout << "Dia chi cua bien p dang tro toi: "<<p;
		cout << "\nGia tri cua bien p=  "<<&p;
		delete(p);
	}
	return 0;
 }