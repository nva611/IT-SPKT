#include <stdio.h>
#define N 5
void nhap(int a[]);
int ViTriMax(int a[]);
int ViTriMin(int a[]);
int DoiChoMaxMin(int a[], int x, int y);
void xuat(int a[]);
void main()
{
	int a[N];
	nhap(a);
	int x = ViTriMax(a);
	int y = ViTriMin(a);
	int kq = DoiChoMaxMin(a, x, y);
	xuat(a);
}
void nhap(int a[])
{
	for (int i = 0; i  < N; i++)
		scanf("%d", &a[i]);
}
int ViTriMax(int a[])
{
	int t = a[0];
	int m = 0;
	for (int i = 1; i < N; i++)
		if(a[i] > t)
		{
			t = a[i];
			m = i;
		}
	return m;
}
int ViTriMin(int a[])
{
	int t = a[0];
	int n = 0;
	for (int i = 1; i < N; i++)
		if(a[i] < t)
		{
			t = a[i];
			n = i;
		}
	return n;
}
int DoiChoMaxMin(int a[], int x, int y)
{
	int t;
	t = a[x];
	a[x] = a[y];
	a[y] = t;
	return 0;
}
void xuat(int a[])
{
	for (int i = 0; i < N; i++)
		printf("%d ", a[i]);
}