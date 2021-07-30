#include <stdio.h>
void nhap(int &a, int A[]);
void max(int a, int A[], int &m);
int XoaMax(int &a, int A[], int B[], int m);
void xuat(int a, int B[]);
void main()
{
	int a, A[100], B[100], m;
	nhap(a, A);
	max(a, A, m);
	int kt = XoaMax(a, A, B, m);
	xuat(a, B);
}
void nhap(int &a, int A[])
{
	scanf("%d", &a);
	for (int i=0;i<a;i++)
		scanf("%d", &A[i]);
}
void max(int a, int A[], int &m)
{
	m = A[0];
	for (int i=1;i<a;i++)
		if(m<A[i])
			m=A[i];
}
int XoaMax(int &a, int A[], int B[], int m)
{
	int j=0;
	for (int i=0; i<a;i++)
		if(A[i]!=m)
			B[j++]= A[i];
	
	a = j;
	return 1;
}
void xuat(int a, int B[])
{
	for (int i=0; i <a; i++)
		printf("%d ", B[i]);
}
