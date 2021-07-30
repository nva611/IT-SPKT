#include <stdio.h>
void nhap(int &a, int A[]);
void TimTrung(int a, int A[], int B[], int &b);
void XoaTrung(int a, int A[], int B[], int b);
void xuat(int k);
void main()
{
	int a, A[100], B[100], b;
	nhap(a, A);
	TimTrung(a, A, B, b);
	XoaTrung(a, A, B, b);
}
void nhap(int &a, int A[])
{
	scanf("%d", &a);
	for(int i=0;i<a;i++)
		scanf("%d", &A[i]);
}
void TimTrung(int a, int A[], int B[], int &b)
{
	b=0;
	for(int i=1; i<a;i++)
	{
		for(int j=0; j<i;j++)
			if(A[i]==A[j])
			{
				B[b]=A[i];
				b++;
			}
	}
}

void XoaTrung(int a, int A[], int B[], int b)
{
	for(int i=0; i<a; i++)
	{
		for(int j=0; j<b; j++)
			if (A[i]==B[j])
				break;
		if(j==b)
			xuat(A[i]);
	}
}
void xuat(int k)
{
	printf("%d ", k);
}
