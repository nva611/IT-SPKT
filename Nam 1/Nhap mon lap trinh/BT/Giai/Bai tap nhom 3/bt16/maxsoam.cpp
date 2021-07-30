#include <stdio.h>
#define N 5
void nhap(int a[]);
int am(int n);
int maxam(int a[], int b[]);
void xuat(int k);
void main()
{
	int a[N], b[N];
	nhap(a);
	int kt =maxam(a, b);
	xuat(kt);
}
void nhap(int a[])
{
	for (int i = 0; i < N; i++)
		scanf("%d", &a[i]);
}
int am(int n)
{
	if(n<0)
		return 1;
	return 0;
}
int maxam(int a[], int b[])
{
	int j=0;
	for (int i = 0; i< N; i++)
		if (am(a[i])==1)
			b[j++]= a[i];
	int m = b[0];
	for (i=0; i < j; i++)
		if (b[i] < b[i+1])
			m = b[i+1];
	return m;
}
void xuat(int k)
{
	printf("%d", k);
}

