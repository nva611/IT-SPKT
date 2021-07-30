#include <stdio.h>
#define N 5
void nhap(int a[]);
int laHH(int n);
int demsoHH(int a[]);
void xuat(int k);
void main()
{
	int a[N];
	nhap(a);
	int kt = demsoHH(a);
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
int demsoHH(int a[])
{
	int d = 0;
	for (int i = 0; i < N; i++)
		if (laHH(a[i])==1)
			d++;
	return d;
}
void xuat(int k)
{
	printf("%d", k);
}