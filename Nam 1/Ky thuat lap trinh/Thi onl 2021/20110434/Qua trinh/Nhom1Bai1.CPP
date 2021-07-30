#include <stdio.h>
int so_hoc_sinh_len_lop(struct HOCSINH hs[50], int n);
void xuat(int k);
void xuat_thong_tin(struct HOCSINH hs[50], int n);
void nhap_thong_tin(struct HOCSINH hs[50], int n);
void nhap(int &n);

struct DATE
{
	int d;
	int m;
	int y;
};
struct HOCSINH
{
	char MSHS[6];
	char hoten[31];
	struct DATE time;
	char diachi[51];
	char phai[4];
	float diemtb;
};

void main()
{
	struct HOCSINH hs[50];
	int so_hoc_sinh;

	nhap(so_hoc_sinh);

	nhap_thong_tin(hs, so_hoc_sinh);

	xuat_thong_tin(hs, so_hoc_sinh);

	printf("\nSo hoc sinh len lop: ");
	int dem = so_hoc_sinh_len_lop(hs, so_hoc_sinh);
	xuat(dem);
}
void xuat(int k)
{
	printf("%d", k);
}
int so_hoc_sinh_len_lop(struct HOCSINH hs[50], int n)
{
	int dem=0;
	for(int i=0; i<n; i++)
		if(hs[i].diemtb >= 5.0)
			dem++;
	return dem;
}
void xuat_thong_tin(struct HOCSINH hs[50], int n)
{
	printf("\nXUAT THONG TIN HOC SINH\n");
	for(int i=0; i<n; i++)
	{
		printf("\nThong tin hoc sinh %d", i+1);
		printf("\nMa so hoc sinh: %s", hs[i].MSHS);

		printf("\nHo va ten: %s", hs[i].hoten);

		printf("\nNgay thang nam sinh: %d/%d/%d", hs[i].time.d, hs[i].time.m, hs[i].time.y);

		printf("\nDia chi: %s", hs[i].diachi);

		printf("\nGioi tinh: %s", hs[i].phai);

		printf("\nDiem trung binh: %.2f\n", hs[i].diemtb);
	}
}
void nhap_thong_tin(struct HOCSINH hs[50], int n)
{
	
	printf("NHAP THONG TIN HOC SINH\n");
	for(int i=0; i<n; i++)
	{
		fflush(stdin);
		printf("\nHoc sinh %d", i+1);

		printf("\nMa so hoc sinh: ");
		gets(hs[i].MSHS);

		printf("Ho va ten: ");
		gets(hs[i].hoten);
		

		printf("Ngay thang nam sinh: ");
		scanf("%d%d%d", &hs[i].time.d, &hs[i].time.m, &hs[i].time.y);
		fflush(stdin);

		printf("Dia chi: ");
		gets(hs[i].diachi);

		printf("Gioi tinh: ");
		gets(hs[i].phai);

		
		printf("Diem trung binh: ");
		scanf("%f", &hs[i].diemtb);
	}
}
void nhap(int &n)
{
	scanf("%d", &n);
}