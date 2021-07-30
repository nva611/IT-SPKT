#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ThuVien
{
	char MaSSach[11];
	char TenSach[51];
	char TacGia[51];
	int SoLuong;
};

bool TimKiem(char a[], char b[]);
void XuatThongTinTheoTacGia(ThuVien *sach, int SLDauSach, char TacGia[]);
void xuatThongTinMotDauSach(ThuVien DauSach);
void nhapDsDS(ThuVien *sach, int SLDauSach);
void nhapSLDS(int &n);

void main()
{
	int SLDauSach;
	char TacGia[51];
	nhapSLDS(SLDauSach);
	ThuVien *sach;
	sach = (struct ThuVien*) malloc(100*sizeof(struct ThuVien));
	nhapDsDS(sach, SLDauSach);
	XuatThongTinTheoTacGia(sach, SLDauSach, TacGia);
}
void nhapSLDS(int &n)
{
	printf("Nhap so luong dau sach: ");
	scanf("%d", &n);
}
void nhapDsDS(ThuVien *sach, int SLDauSach)
{
	for(int i=0; i<SLDauSach; i++)
	{
		printf("\nDau sach %d", i+1);
		getchar();
		printf("\nMa so sach: ");
		fgets((*(sach+i)).MaSSach, sizeof((*(sach+i)).MaSSach), stdin);
		int len = strlen((*(sach+i)).MaSSach);
		(*(sach+i)).MaSSach[len-1] = '\0';
		
		printf("\nTen sach: ");
		fgets((*(sach+i)).TenSach, sizeof((*(sach+i)).TenSach), stdin);
		len = strlen((*(sach+i)).TenSach);
		(*(sach+i)).TenSach[len-1] = '\0';

		printf("\nTac gia: ");
		fgets((*(sach+i)).TacGia, sizeof((*(sach+i)).TacGia), stdin);
		len = strlen((*(sach+i)).TacGia);
		(*(sach+i)).TacGia[len-1] = '\0';

		printf("\nSo luong: ");
		scanf("%d", &(*(sach+i)).SoLuong);
	}
}
void xuatThongTinMotDauSach(ThuVien DauSach)
{
	printf("\nMa so sach: %s", DauSach.MaSSach);
	printf("\nTen sach: %s", DauSach.TenSach);
	printf("\nTac gia: %s", DauSach.TacGia);
	printf("\nSo luong: %d", DauSach.SoLuong);
}
void XuatThongTinTheoTacGia(ThuVien *sach, int SLDauSach, char TacGia[])
{
	getchar();
	printf("Nhap ten tg can tim: ");
	fgets(TacGia, sizeof(TacGia), stdin);
	for(int i=0; i< SLDauSach; i++)
	{
		if(TimKiem(TacGia, (*(sach+i)).TacGia)== true)
			xuatThongTinMotDauSach((*(sach+i)));
	}
}
bool TimKiem(char a[], char b[])
{
	strupr(a);
	strupr(b);
	if(strlen(a)!=strlen(b))
		return false;
	for(int i=0; i<strlen(a); i++)
		if(a[i]!=b[i])
			return false;
	return true;
}