#include <stdio.h>
#define N 6
void nhap(int a[]);
void xuat(int a[]);

void main()
{
	int a[N];
	nhap(a);
	xuat(a);
}
void nhap(int a[])
{
	for (int i = 0; i < N; i++)
		scanf("%d", &a[i]);
}
void xuat(int a[])
{
	for (int i = 0; i< N; i++)
		printf("%d", a[i]);
}