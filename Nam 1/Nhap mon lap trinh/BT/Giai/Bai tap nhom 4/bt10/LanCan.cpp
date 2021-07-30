#include <stdio.h>
void nhap(int &n, float A[]);
void TraiDau(int n, float A[]);
void xuat(float k);
void main()
{
	int n;
	float A[1000];
	nhap(n, A);
	TraiDau(n, A);
}
void nhap(int &n, float A[])
{
	scanf("%d", &n);
	for (int i =0; i<n; i++)
		scanf("%f", &A[i]);
}
void TraiDau(int n, float A[])
{
	if (A[0]*A[1]<0)
		xuat(A[0]);
	for(int i =1; i<n-1; i++)
		if(A[i]*A[i+1]<0 || A[i]*A[i-1]<0)
			xuat(A[i]);
	if(A[n-1]*A[n-2]<0)
		xuat(A[n-1]);
}
void xuat(float k)
{
	printf("%f ", k);
}