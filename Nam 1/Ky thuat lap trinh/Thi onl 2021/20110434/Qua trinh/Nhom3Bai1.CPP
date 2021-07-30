#include <stdio.h>
int tinh(int n);
void xuat(int k);
void nhap(int &n);
void main()
{
	int n;
	nhap(n);
	int kq = tinh(n);
	xuat(kq);
}
int tinh(int n)
{
	int kq = 0;
	for(int i=1; i<=n; i++)
		kq = kq + i*(n-i+1); 
	return kq;
}
void xuat(int k)
{
	printf("%d", k);
}
void nhap(int &n)
{
	scanf("%d", &n);
}