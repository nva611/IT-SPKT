#include <stdio.h>
void nhap(int &a, int &b, int &c, int &x, int &y, int &z);
int nam(int n);
int thang(int n, int m, int &j);
int demngaytheonam(int c, int z);
int demngaytheothang(int a, int b, int c, int x, int y, int z, int j);
int demngaycungnam(int a, int b, int c, int x, int y, int j);
int demngay(int a, int b, int c, int x, int y, int z, int j);
void xuat( int kq);
void main()
{
	int a, b, c, x, y, z, j;
	nhap(a, b, c, x, y, z);
	int kq = demngay(a, b, c, x, y, z, j);
	xuat(kq);
}
void nhap(int &a, int &b, int &c, int &x, int &y, int &z)
{
	scanf("%d%d%d%d%d%d", &a, &b, &c, &x, &y, &z);
}
int nam(int n)
{
	if ((n%100!=0 && n%4==0) || (n%100==0 && n%4==0))
		return 1;
	else 
		return 0;
}
int thang(int n, int m, int &j)
{
	if (n==2)
	{
		if (nam(m) == 1)
			j = 29;
		else
			j = 28;
	}
	else if ((n%2==1 && n < 8) || (n%2==0 && n>=8))
		j = 31;
	else
		j = 30;
	return j;
}
int demngaytheonam(int c, int z)
{
	int d = 0;
	for (int i = c+1; i < z; i++)
		if (nam(i)==1)
			d += 366;
		else
			d +=365;
	return d;
}
int demngaytheothang(int a, int b, int c, int x, int y, int z, int j)
{
	int d1 = 0, d2 = 0, s;
	for (int i = 1; i < b; i++)
		d1 += thang(i, c, j);
	d1 += a;
	for (i = 1; i < y; i++)
		d2 += thang(i, z, j);
	d2 += x; 
	if (nam(c) ==1)
		d1 = 366 - d1;
	else
		d1 = 365 - d1;
	s = d1 + d2;
	return s;
}
int demngaycungnam(int a, int b, int c, int x, int y, int j)
{
	int d1 = 0, d2 = 0, s;
	for (int i = 1; i < b; i++)
		d1 += thang(i, c, j);
	d1 += a;
	for (i = 1; i < y; i++)
		d2 += thang(i, c, j);
	d2 += x; 
	s = d2 - d1;
	return s;
}
int demngay(int a, int b, int c, int x, int y, int z, int j)
{
	int t;
	if (c == z)
		t = demngaycungnam(a, b, c, x, y, j);
	else
		t = demngaytheonam(c, z) + demngaytheothang(a, b, c, x, y, z, j);
	return t;
}
void xuat( int kq)
{
	printf("%d", kq);
}

