#include <stdio.h>
#define N 5
void nhap(int a[]);
int laSL(int n);
int SoLeDau(int a[]);
void xuat(int k);
void main()
{
	int a[N];
	nhap(a);
	int kq = SoLeDau(a);
	xuat(kq);
}
void nhap(int a[])
{
	for (int i = 0; i < N; i++)
		scanf("%d", &a[i]);
}
int laSL(int n)
{
	if(n%2==1)
		return 1;
	return 0;
}
int SoLeDau(int a[])
{
	for (int i = 0; i < N; i++)
		if (laSL(a[i])==1)
			return a[i];
	return 0;
}
void xuat(int k)
{
	printf("%d", k);
}