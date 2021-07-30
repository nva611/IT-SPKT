#include <stdio.h>
void nhap(int &a, int A[], int &b, int B[]);
int CheckMangCon(int a, int A[], int b, int B[]);
void xuat(int k);
void main()
{
	int a, A[100], b, B[100];
	nhap(a, A, b, B);
	int kq = CheckMangCon(a, A, b, B);
	xuat(kq);
}
void nhap(int &a, int A[], int &b, int B[])
{
	scanf("%d", &a);
	for(int i=0; i<a;i++)
		scanf("%d", &A[i]);
	scanf("%d", &b);
	for( i=0; i<b;i++)
		scanf("%d", &B[i]);
}
int CheckMangCon(int a, int A[], int b, int B[])
{
	int check =0, i, j;
	for (i=0; i<b-a+1; i++)
		if(B[i]==A[0])
		{
			check = 1;
			int nb = i;
			for(j=0; j<a; j++)
				if(A[j]!=B[nb++])
				{
					check = 0;
					break;
				}
			if(j==a)
				return check;
		}
	return check;
}
void xuat(int k)
{
	printf("%d", k);
}