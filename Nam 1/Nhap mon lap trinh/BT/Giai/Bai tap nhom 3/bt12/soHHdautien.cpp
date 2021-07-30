#include <stdio.h>
#define N 5
void nhap(int a[]);
int laHH(int n);
int soHH(int a[]);
void xuat(int k);
void main()
{
	int a[N];
	nhap(a);
	int kt = soHH(a);
	xuat(kt);
}
void nhap(int a[])
{
	for (int i = 0; i < N; i++)
		scanf("%d", &a[i]);
}
int laHH(int n)
{
	int t = 0;
	for (int i = 1; i < n; i++)
		if (n%i==0)
			t += i;
	if (t==n)
		return 1;
	return 0;
}
int soHH(int a[])
{
	for (int i = 0; i < N; i++)
		if (laHH(a[i])==1)
			return a[i];
	return -1;
}
void xuat(int k)
{
	printf("%d", k);
}