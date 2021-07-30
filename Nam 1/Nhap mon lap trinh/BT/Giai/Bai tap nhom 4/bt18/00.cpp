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
	for (int i=0;i<n;i++)
		scanf("%d", &A[i]);
}
int check(int n, int A[])
{
	for (int i=0; i<n-1;i++)
		if (A[i]==0 && A[i+1]==0)
			return 1;
	return 0;
}
void xuat(int k)
{
	if(k==1)
		printf("Co 2 so 0 lien tiep");
	else
		printf("KHONG CO 2 so 0 lien tiep");
}

