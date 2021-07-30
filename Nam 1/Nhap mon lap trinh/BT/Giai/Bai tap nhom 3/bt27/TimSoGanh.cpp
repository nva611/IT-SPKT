#include <stdio.h>
#define N 6
void nhap(int a[]);
int laSG(int n);
int SoGanh(int a[]);
void xuat(int k);
void main()
{
	int a[N];
	nhap(a);
	int kq = SoGanh(a);
	xuat(kq);
}
void nhap(int a[])
{
	for (int i = 0; i < N; i++)
		scanf("%d", &a[i]);
}
int laSG(int n)
{
	int t;
	int h = 0;
	int m = n;
	while(n > 0)
	{
		t = n%10;
		h = h*10 + t;
		n = n/10;
	}
	if (m==h)
		return 1;
	return 0;
}
int SoGanh(int a[])
{
	for (int i = 0; i < N; i++)
		if (laSG(a[i])==1)
			return a[i];
	return 0;
}
void xuat(int k)
{
	if(k==0)
		printf("Khong co");
	else
		printf("%d", k);
}