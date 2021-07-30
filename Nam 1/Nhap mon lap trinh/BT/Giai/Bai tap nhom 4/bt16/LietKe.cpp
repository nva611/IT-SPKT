#include <stdio.h>
void nhap(int &a, int A[], int &b, int B[]);
void LietKeGT(int a, int A[], int b, int B[]);
void xuat(int k);
void main()
{
	int a, A[1000], b, B[1000];
	nhap(a, A, b, B);
	LietKeGT(a, A, b, B);
}
void nhap(int &a, int A[], int &b, int B[])
{
	scanf("%d", &a);
	for (int i = 0; i<a; i++)
		scanf("%d", &A[i]);
	scanf("%d", &b);
	for(i = 0; i<b;i++)
		scanf("%d", &B[i]);
}
void LietKeGT(int a, int A[], int b, int B[])
{
	int C[1000], c=0;
	int j;
	for(int i = 0; i<a; i++)
	{
		for (j=0;j<b;j++)
			if(A[i]==B[j])
				C[c++] = A[i];
	}
	for (i=0; i<a; i++)
	{
		for(j=0; j<c; j++)
			if(A[i]==C[j])
				break;
		if (j==c)
			xuat(A[i]);
	}
	for (i=0; i<b; i++)
	{
		for(j = 0; j<c; j++)
			if(B[i]==C[j])
				break;
		if (j==c)
			xuat(B[i]);
	}
}
void xuat(int k)
{
	printf("%d ", k);
}