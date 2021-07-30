#include <stdio.h>
void nhap(int &m, float A[], float B[]);
void check(int m, float A[], float B[]);
void xuat(float k);
void main()
{
	float A[1000], B[1000];
	int m;
	nhap(m, A, B);
	check(m, A, B);
}
void nhap(int &m, float A[], float B[])
{
	scanf("%d", &m);
	for (int i = 0; i<m;i++)
		scanf("%f", &A[i]);
	for (i = 0; i<m; i++)
		scanf("%f", &B[i]);
}
void check(int m, float A[], float B[])
{
	for (int i =0; i<m; i++)
	{
		for (int j=0;j<m;j++)
		{
			if(A[i]==B[j])
				break;
		}
		if(j==m)
			xuat(A[i]);
	}
}
void xuat(float k)
{
	printf("%f ", k);
}
