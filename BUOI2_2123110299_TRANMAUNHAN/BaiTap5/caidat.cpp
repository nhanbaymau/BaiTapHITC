#include"bt5.h"
 

void NhapMT(int*& p, int n) {
	p = new int[n];
	if (p == NULL)
	{
		cout << "Khong Cap Phat dc o nho!";
		return;
	}
	else {
		srand(unsigned(time(NULL)));
		for (int i = 0; i < n; i++)
			*(p + i) = rand() % 50 - 25;
		
	}
}
void XuatMT(int* p, int n) {
	for (int i = 0; i < n; i++)
		cout << *(p + i) << "\t";
}

long long TinhT(int* &p,int n) {
	int Tong=0;
	for (int i = 0; i < n; i++)
		Tong += *(p + i);
	return Tong;

}
int Tong_Chan(int* p, int n)
{
	int Tong = 0;
	for (int i = 0; i < n; i++)
		if (*(p + i) % 2 == 0)
			Tong += *(p + i);
	return Tong;

}
int Tong_Am(int* p, int n)
{
	int Tong = 0;
	for (int i = 0; i < n; i++)
		if (*(p + i) < 0)
			Tong += *(p + i);
	return Tong;
}
bool KTNT(int k) {
	
	if (k <= 1) {
		return 0;
	}
	for (int i = 2; i <k/2; ++i) {
		if (k % i == 0) {
			return 0;
		}
	}
	return 1;
}
bool KTCP(int k)
{
	if (k < 0) 
		return false;

	int tam = (int)sqrt((double)k);
	if (tam * tam == k)
		return true;

	return false;
}

int TongCP(int* p, int n) {
	int sum = 0;
	for (int i = 0; i < n; ++i) 
	{ 
		if (KTCP(*(p + i))) 
		{ 
			sum += *(p + i);
		}
	}
	return sum;
}
int TongNT(int* p, int n) {
	int sum = 0;
	for (int i = 0; i <= n; ++i) {
		if (KTNT(*(p + i))==1) {
			sum += *(p + i);
		}
	}
	return sum;
}
void LietKeNT(int* p, int n) {
	int lietke=0 ;
	for (int i = 0; i <= n; ++i)
	{
		if (KTNT(*(p + i)))
		{
			lietke = 1;
			cout << *(p + i) << "    ";
		}
	}
		if (!lietke)
		{
			cout << "Khong co so nguyen to.";
		}
}
int Demle(int* p, int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)

		if (*(p + i) % 2 != 0)
			dem++;
	return dem;
	

}
void MAX(int* p, int n)
{
	int m = 0;
	for (int i = 0; i < n; i++)
		if (*(p + i) > m)
			m = *(p + i);
	cout << m << " ";
}
void KiemtraNT(int* p, int n) {
	int kiemtra = 0;
	for (int i = 0; i <= n; ++i)
	{
		if (KTNT(*(p + i)))
		{
			kiemtra = 1;
			break;
		}
	}

	if (kiemtra)
	{
		cout << "Mang co so nguyen to.";
	}
	else
	{
		cout << "Mang khong co so nguyen to";
	}

}
void MAXAm(int* p, int n)
{
	int m = 0;
	for (int i = 0; i < n; i++)
		if ( *(p + i)<0&& *(p + i)<m)
			m = *(p + i);
	cout << m << " ";
}
void Chandau(int* p, int n)
{
	for(int i=0;i<n;i++)
		if (*(p + i) % 2 == 0)
		{
			cout << *(p + i) << " ";
			break;
		}
}
void MaxDau(int* p, int n)
{
	int m = *p;
	for (int i = 1; i < n; i++)
		if (*(p + i) > m)
			cout << *(p + i) << "  ";
}
