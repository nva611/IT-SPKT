#include <stdio.h>
#define N 5
void nhap(int a[]);
int SoChan(int n);
int ChanMin(int a[]);
void xuat(int k);
void main()
{
	 int a[N];
	 nhap(a);
	 int kt = ChanMin(a);
	 xuat(kt);
}
void nhap(int a[])
{
	for (int i = 0; i < N; i++)
		scanf("%d", &a[i]);
}	
int SoChan(int n)
{
	if (n % 2==0)
		return 1;
	return 0;
}
int ChanMin(int a[])
{
	int t = 0;
	for (int i = 0; i < N; i++)
		if (SoChan(a[i])==1)
		{
			t = a[i];
			break;
		}
	if (t != a[i])
		return -1;
	for (int j = i; j < N; j++)
		if (a[j] < t && SoChan(a[j])==1)
			t = a[j];
	return t;
}
void xuat(int k)
{
	printf("%d", k);
}
