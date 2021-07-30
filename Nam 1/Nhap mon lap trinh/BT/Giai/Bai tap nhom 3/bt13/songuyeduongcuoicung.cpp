#include <stdio.h>
#define N 5
void nhap(float a[]);
int laND(float n);
int songuyenduong(float a[]);
void xuat(int k);
void main()
{
	float a[N];
	nhap(a);
	int kt = songuyenduong(a);
	xuat(kt);
}
void nhap(float a[])
{
	for (int i =0; i <  N; i++)
		scanf("%f", &a[i]);
}
int laND(float n)
{
	float t;
	t = n - int(n);
	if (t==0)
		return 1;
	else
		return 0;
}
int songuyenduong(float a[])
{
	for (int i = N -1; i>=0; i--)
		if(laND(a[i])==1)
		{
			int x = a[i];
			return x;
		}
	return -1;
}
void xuat(int k)
{
	printf("%d", k);
}
