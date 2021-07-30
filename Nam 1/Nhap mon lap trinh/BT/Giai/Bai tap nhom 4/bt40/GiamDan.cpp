#include <stdio.h>
void nhap(int &a, int A[]);
void swap(int &x, int &y);
void GiamDan(int a, int A[]);
void xuat(int a, int A[]);
void main()
{
	int a, A[100];
	nhap(a, A);
	GiamDan(a, A);
	xuat(a, A);
}
void nhap(int &a, int A[])
{
	scanf("%d", &a);
	for(int i=0;i<a;i++)
		scanf("%d", &A[i]);
}
void swap(int &x, int &y)
{
	int temp = x; 
	x = y;
	y = temp;
}
void GiamDan(int a, int A[])
{
	for(int i=0; i<a-1; i++)
	{
		int vtr_min=i;
		for(int j = vtr_min; j<a; j++)
			if(A[j]<A[vtr_min])
				vtr_min = j;
		swap(A[i], A[vtr_min]);
	}
}
void xuat(int a, int A[])
{
	for(int i=0; i<a; i++)
		printf("%d ", A[i]);
}
