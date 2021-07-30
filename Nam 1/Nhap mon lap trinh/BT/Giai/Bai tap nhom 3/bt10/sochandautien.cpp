#include <stdio.h>
#define N 5
void nhap(int a[]);
int sochan(int a[]);
void xuat(int k);
void main()
{
	int a[N];
	nhap(a);
	int kt = sochan(a);
	xuat(kt);
}
void nhap(int a[])
{
	for (int i = 0; i < N; i++)
		scanf("%d", &a[i]);
}
int sochan(int a[])
{
	for (int i = 0; i < N; i++)
		if (a[i]%2==0)
			return a[i];
	return -1;
}
void xuat(int k)
{
	printf("%d", k);
}