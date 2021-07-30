#include <stdio.h>


struct Ngay
{
	int d, m, y;
};
struct MayTinh
{
	char loai[16];
	char noiSX[21];
	Ngay tGianBaoHanh;
};

void nhapSoLgMayTinh(int &n);
void nhapListMayTinh(MayTinh* mt, int n);

void main()
{
	MayTinh *mt;
	int SlMayTinh;
	nhapSoLgMayTinh(SlMayTinh);
	nhapListMayTinh(mt, SlMayTinh);
}
void nhapSoLgMayTinh(int &n)
{
	printf("Nhap so luong may tinh: ");
	scanf("%d", &n);
	fflush(stdin);
	//getchar();
}

void nhapListMayTinh(MayTinh* mt, int n)
{
	for(int i=0; i<n; i++)
	{
		printf("Nhap thong tin MT %d:", i+1);
		printf("\nLoai may: ");
		gets((mt+i)->loai);
		printf("\nNoi SX: ");
		gets((mt+i)->noiSX);
	}
}