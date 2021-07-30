#include <stdio.h>
void nhap(int &n, int A[]);
int DangSong(int a, int b, int c);
int check(int n, int A[]);
void xuat(int kq);
void main()
{
	int n, A[100];
	nhap(n, A);
	int kq = check(n, A);
	xuat(kq);
}
void nhap(int &n, int A[])
{
	scanf("%d", &n);
	for (int i =0; i<n;i++)
		scanf("%d", &A[i]);
}
int DangSong(int a, int b, int c)
{
	if ((b>a && b>c) || (b<a && b<c))
		return 1;
	else
		return 0;
}
int check(int n, int A[])
{
	for (int i = 1; i<n-1; i++)
		if (DangSong(A[i-1], A[i], A[i+1])==1)
			return 1;
	return 0;
}
void xuat(int kq)
{
	printf("%d", kq);
}