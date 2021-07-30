#include <stdio.h>
#define N 5
void nhap(int a[]);
int laNT(int n);
int soNT(int a[]);
void xuat(int k);
void main()
{
	int a[N];
	nhap(a);
	int kt = soNT(a);
	xuat(kt);
}
void nhap(int a[])
{
	for (int i= 0; i< N; i++)
		scanf("%d", &a[i]);
}
int laNT(int n)
{
	int d = 0;
	for (int i = 1; i <= n; i++)
		if (n%i==0)
			d++;
	if(d==2)
		return 1;
	return 0;
}
int soNT(int a[])
{
	for (int i = 0; i < N; i++)
		if (laNT(a[i])==1)
			return a[i];
	return -1;
}
void xuat(int k)
{
	printf("%d", k);
}