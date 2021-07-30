#include <stdio.h>
#define N 5
void nhap(int a[]);
int SoAm(int n);
int ViTri(int a[]);
void xuat(int k);
void main()
{
	int a[N];
	nhap(a);
	int kq = ViTri(a);
	xuat(kq);
}
void nhap(int a[])
{
	for (int i = 0; i < N; i++)
		scanf("%d", &a[i]);
}
int SoAm(int n)
{
	if (n < 0)
		return 1;
	return 0;
}
int ViTri(int a[])
{
	int vt;
	int t = 0;
	for (int i = 0; i < N; i++)
		if (SoAm(a[i])==1)
		{
			t = a[i];
			break;
		}
	if (t==0)
		return -1;
	for (int j = i; j < N; j++)
		if (a[j] > t && SoAm(a[j])==1)
		{
			t = a[j];
			vt = j+1;
		}
	return vt;
}
void xuat(int k)
{
	printf("%d", k);
}