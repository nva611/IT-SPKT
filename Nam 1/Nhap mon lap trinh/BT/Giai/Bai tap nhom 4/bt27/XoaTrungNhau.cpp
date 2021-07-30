#include <stdio.h>
void nhap(int &a, int A[]);
void DayKhongTrung(int &a, int A[], int B[]);
void xuat(int a, int B[]);
void main()
{
	int a, A[100], B[100];
	nhap(a, A);
	DayKhongTrung(a, A, B);
	xuat(a, B);
}
void nhap(int &a, int A[])
{
	scanf("%d", &a);
	for(int i=0; i<a; i++)
		scanf("%d", &A[i]);
}
void DayKhongTrung(int &a, int A[], int B[])
{
	B[0]=A[0];
	int n=1;
	for(int i=1;i<a;i++)
	{
		for(int j=0; j<n; j++)
			if(B[j]==A[i])
				break;
		if(j==n)
		{	B[j]=A[i];
			n++;
		}
	}
	a=n;
}
void xuat(int a, int B[])
{
	for(int i=0; i<a; i++)
		printf("%d ", B[i]);
}
