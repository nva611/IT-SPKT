#include <stdio.h>
void nhap(int &n, int A[]);
int check(int n, int A[], int &d);
void xuat(int k, int d);
void main()
{
	int n, A[100], d;
	nhap(n, A);
	int kt = check(n, A, d);
	xuat(kt, d);
}
void nhap(int &n, int A[])
{
	scanf("%d", &n);
	for(int i =0;i<n;i++)
		scanf("%d", &A[i]);
}
int check(int n, int A[], int &d)
{
	d =A[1]-A[0];
	for (int i=1; i<n-1; i++)
		if(A[i+1]-A[i]!=d)
			return 0;
	return 1;
}
void xuat(int k, int d)
{
	if (k==0)
		printf("khong phai la cap so cong");
	else
		printf("la cap so cong, cong sai d = %d", d);
}