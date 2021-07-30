#include <stdio.h>
#define N 1000
void nhap(int a[], int &m);
int laNt(int n);
int demsoNT(int a[], int m);
void xuat(int k);
void main()
{
	int a[N], m;
	nhap(a, m);
	int kt = demsoNT(a, m);
	xuat(kt);
}
void nhap(int a[], int &m)
{
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
		scanf("%d", &a[i]);
}
int laNT(int n)
{
	int d = 0;
	for (int i = 1; i <= n; i++)
		if(n%i==0)
			d++;
	if (d==2)
		return 1;
	return 0;
}
int demsoNT(int a[], int m)
{
	int d = 0;
	for (int i = 0;  i < m; i++)
		if (laNT(a[i])==1)
			d++;
	return d;
}
void xuat(int k)
{
	printf("%d", k);
}