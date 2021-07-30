#include <stdio.h>
void nhap(int &a, int A[]);
int laSoChan(int n);
void XuLy(int a, int A[], int C[]);
void xuat(int a, int A[]);
void main()
{
	int a, A[100], C[100];
	nhap(a, A);
	XuLy(a, A, C);
	xuat(a, A);
}
void nhap(int &a, int A[])
{
	scanf("%d", &a);
	for(int i=0; i<a; i++)
		scanf("%d", &A[i]);
}
int laSoChan(int n)
{
	if(n==0)
		return 3;
	if (n%2==0)
		return 1;
	return 0;
}
void XuLy(int a, int A[], int C[])
{
	/*int c=0, l=0;
	int n = 0;
	for(int i=0; i<a; i++)
		if(laSoChan(A[i])==1)
			C[c++]=A[i];
		else 
			L[l++]=A[i];
	int m = a - l - c ;
	for (i=0; i<c; i++)
		A[n++] = C[i];
	for(i = 0; i<m; i++)
		A[n++] = 0;
	for (i=0; i<l; i++)
		A[n++] = L[i];*/
	int n=0;
	for(int i=0;i<a;i++)
		if(laSoChan(A[i])==1 && A[i]!=0)
			C[n++]=A[i];
	for (i=0; i<a; i++)
		if(laSoChan(A[i])==3)
			C[n++]=A[i];
	for (i=0; i<a; i++)
		if(laSoChan(A[i])==0)
			C[n++]=A[i];
	n=0;
	for(i =0; i<a;i++)
		A[i]=C[n++];
}
void xuat(int a, int A[])
{
	for(int i=0; i<a; i++)
		printf("%d ", A[i]);
}