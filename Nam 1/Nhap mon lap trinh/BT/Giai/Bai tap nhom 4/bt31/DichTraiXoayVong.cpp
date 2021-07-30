#include <stdio.h>
void nhap(int &a, int A[]);
void DichTraiXoayVong(int a, int A[]);
void xuat(int a, int A[]);
void main()
{
	int a, A[100];
	nhap(a, A);
	DichTraiXoayVong(a, A);
	xuat(a, A);
}
void nhap(int &a, int A[])
{
	scanf("%d", &a);
	for(int i=0; i<a;i++)
		scanf("%d", &A[i]);
}
void DichTraiXoayVong(int a, int A[])
{
	/*int k=2;
	for(int j=1; j<= k; j++)*/
	
		int temp;
		temp = A[0];
		for(int i=0; i<a-1; i++)
			A[i]=A[i+1];
		A[a-1]=temp;
	
}
void xuat(int a, int A[])
{
	for (int i=0;i<a;i++)
		printf("%d ", A[i]);
}
