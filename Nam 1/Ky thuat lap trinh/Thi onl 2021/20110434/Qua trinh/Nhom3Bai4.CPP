#include <stdio.h>
#include <math.h>

void nhap(int &n, int A[]);
void xuat(int k);
int la_so_nguyen_to(int k);
int so_nt_min(int n, int A[]);

void main()
{
	int n, A[1000];
	nhap(n, A);
	int x = so_nt_min(n, A);
	xuat(x);
}
int so_nt_min(int n, int A[])
{
	int i=0;
	while(la_so_nguyen_to(A[i])==0 && i<n)
		i++;
	if(i==n)
		return -1;
	int min = A[i];
	for(int j=i+1; j<n; j++)
		if(la_so_nguyen_to(A[j])==1 && A[j]<min)
			min = A[j];
	return min;
}
int la_so_nguyen_to(int k)
{
	if(k<2)
		return 0;
	for(int i=2; i<=sqrt(k); i++)
		if(k%i==0)
			return 0;
	return 1;
}
void xuat(int k)
{
	if(k==-1)
		printf("Khong co so nguyen to");
	else
		printf("%d", k);
}
void nhap(int &n, int A[])
{
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &A[i]);
}