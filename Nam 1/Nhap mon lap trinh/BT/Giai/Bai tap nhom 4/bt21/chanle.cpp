#include <stdio.h>
void nhap(int &n, int A[]);
int check(int n, int A[]);
void xuat(int k);
void main()
{
	int n, A[100];
	nhap(n, A);
	int kt = check(n, A);
	xuat(kt);
}
void nhap(int &n, int A[])
{
	scanf("%d", &n);
	for (int i =0; i<n;i++)
		scanf("%d", &A[i]);
}
int check(int n, int A[])
{
	for (int i=0; i<n-1;i++)
		if((A[i]+A[i+1])%2==0)
			return 0;
	return 1;
}
void xuat(int k)
{
	if (k==0)
		printf("Khong co tinh chan le");
	else
		printf("Co tinnh Chan Le");
}