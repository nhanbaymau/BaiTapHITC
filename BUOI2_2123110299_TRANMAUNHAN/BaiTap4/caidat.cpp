#include"bt4.h"

void Hoanvi(int* &a, int* &b) {
	int tam;
	tam = *a;
	*a = *b;
	*b = tam;
}