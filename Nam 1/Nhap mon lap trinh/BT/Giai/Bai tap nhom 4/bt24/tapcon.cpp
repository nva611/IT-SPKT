#include <stdio.h>
void nhap(int &a, int A[], int &b, int B[]);
int TapCon(int a, int A[], int b, int B[]);
void xuat(int k);
void main()
{
	int a, A[100], b, B[100];
	nhap(a, A, b, B);
	int kt = TapCon(a, A, b, B);
	xuat(kt);
}
void nhap(int &a, int A[], int &b, int B[])
{
	scanf("%d", &a);
	for (int i=0;i<a;i++)
		scanf("%d", &A[i]);
	scanf("%d", &b);
	for (i=0;i<b;i++)
		scanf("%d", &B[i]);
}
int TapCon(int a, int A[], int b, int B[])
{
	int d=0;
	if (a>b)
		return 0;
	for (int i=0; i<a; i++)
		for (int j=0; j<b; j++)
			if (A[i]==B[j])
				d++;
	if(d==a)
		return 1;
	else
		return 0;
}
void xuat(int k)
{
	if(k==1)
		printf("A la con cua B");
	else
		printf("A KHONG la con cua B");
}