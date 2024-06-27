#include"bt4.h"
int main() {
    int h, k;
    cout << "Nhap gia tri cua h: ";
    cin >> h;
    cout << "Nhap gia tri cua k: ";
    cin >> k;
    int* a = &h;
    int* b = &k;
    Hoanvi(a, b);
    cout << "Sau khi hoan vi:\n";
    cout << "a = " << *a << "\nb = " << *b << "\n";

    return 0;
}