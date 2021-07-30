#include <stdio.h>
void xuat(int kq);
int timKiem(int n, int x, int A[]);
void nhapSoCanTim(int &x);
void nhap(int &n, int A[]);
void main()
{
	int n, x, A[10000];
	nhap(n, A);
	nhapSoCanTim(x);
	int kq = timKiem(n, x, A);
	xuat(kq);
}
void nhap(int &n, int A[])
{
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &A[i]);
}
void nhapSoCanTim(int &x)
{
	scanf("%d", &x);
}
int timKiem(int n, int x, int A[])
{
	int i=0;
	A[n] = x;
	while(A[i]!=x)
		i++;
	if(i!=n)
		return i;
	else
		return -1;
}
void xuat(int kq)
{
	printf("%d", kq);
}
