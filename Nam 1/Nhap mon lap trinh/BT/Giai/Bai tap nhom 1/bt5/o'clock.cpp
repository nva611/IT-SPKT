#include <stdio.h>
void nhap(int &h, int &m, int &s);
int clock(int h, int m, int s);
void xuat(int kq);
void main()
{
	int h, m, s;
	nhap(h, m, s);
	int kq = clock(h, m, s);
	xuat(kq);
}
void nhap(int &h, int &m, int &s)
{
	scanf("%d%d%d", &h, &m, &s);
}
int clock(int h, int m, int s)
{
	if (0 < h && h <= 24 && 0 <= m && m < 60 && 0 <= s && s < 60)
		return 1;
	else
		return 0;
}
void xuat(int kq)
{
	if (kq==1)
		printf("Bo gio hop le");
	else 
		printf("Bo gio khong hop le");
}