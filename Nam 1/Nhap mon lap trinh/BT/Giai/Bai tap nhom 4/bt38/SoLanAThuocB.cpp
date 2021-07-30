#include <stdio.h>
void nhap(int &a, int A[], int &b, int B[]);
int DemA_thuoc_B(int a, int A[], int b, int B[]);
void xuat(int k);
void main()
{
	int a, A[100], b, B[100];
	nhap(a, A, b, B);
	int kq = DemA_thuoc_B(a, A, b, B);
	xuat(kq);
}
void nhap(int &a, int A[], int &b, int B[])
{
	scanf("%d", &a);
	for(int i=0; i<a; i++)
		scanf("%d", &A[i]);
	scanf("%d", &b);
	for(i=0; i<b; i++)
		scanf("%d", &B[i]);
}
int DemA_thuoc_B(int a, int A[], int b, int B[])
{
	int dem =0, i;
	for (i=0; i< b-a+1; i++)
		if(B[i]==A[0])
		{
			int nb = i;
			for(int j=0; j<a; j++)
				if(A[j]!=B[nb++])
					break;
			if(j==a)
				dem = dem + 1;
		}
	return dem;
}
void xuat(int k)
{
	printf("%d", k);
}
