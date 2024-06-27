#include"bt5.h"

int main() {
	int k;
	int n,m,z,x;

	long long t;
	int* p;
	p = NULL;
	cout << "\n1.Nhap Ma Tran Ngau Nhien.";
	cout << "\n2.Tinh Tong Cac Phan Tu:";
	cout << "\n3.Tinh tong cac phan ta chan, am, nguyen to, chinh phuong";
	cout << "\n4.Dem phan tu le.";
	cout << "\n5.Liet ke cac so nguyen to.";
	cout << "\n6.Tim cac so lon hon so dau tien.";
	cout << "\n7.Tim so lon nhat.";
	cout << "\n8.Tim So chan dau tien.";
	cout << "\n9.Kiem tra co ton tai so nguyen to hay khong.";
	cout << "\n10.Tim so am lon nhat.";
	do{
	
	cout << "\n\nNhap Cau Can Thuc Hien:"; cin >> k;


		switch (k)
		{
		case 1:
			cout << "Nhap gia tri n="; cin >> n;
			NhapMT(p, n);
			cout << "Ma Tran Vua Nhap la:\n";
			XuatMT(p, n);
			break;
		case 2:
		 t = TinhT(p, n);
			cout << "Ket Qua la:"<<t;
			
			
			break;
		case 3:
			m = Tong_Am(p, n);
			t = Tong_Chan(p, n);
			z = TongNT(p, n);
			x=TongCP(p, n);

			cout << "Tong Chan la:" << t;
			cout << "\nTong Am la:" << m;
			cout << "\nTong So NT la:" << z;
			cout << "\nTong So CP la:" << x;

			break;
		case 4:
			m = Demle(p, n);
			cout << "Co " << m << " phan tu le";
			break;
		case 5:
			
			LietKeNT(p, n);
			break;
		case 6:
			cout << "Cac so lon hon so dau tien la:";
			MaxDau(p, n);
			break;
		case 7:
			cout << "So lon nhat la.";
			MAX(p, n);
			break;
		case 8:
			cout << "So Chan Dau Tien La.";
			Chandau(p, n);
			break;
		case 9:
			KiemtraNT(p, n);
			break;
			
		case 10:
			cout << "So am lon nhat la.";
			MAXAm(p, n);
			break;

		
		default:
			cout << "Gia Tri Nhap k hop le:";
			break;
		}
	} while (k != 0);
	{

	}
	
	return 0;
}