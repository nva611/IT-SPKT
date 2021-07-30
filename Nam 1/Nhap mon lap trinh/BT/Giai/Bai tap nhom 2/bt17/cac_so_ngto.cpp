#include <stdio.h>
void nhap(int &n);
int ngto(int a[], int n, int &z);
void xuat(int a[], int z);
void main()
{
	int n, z;
	nhap(n);
	int a[999990];
	int kq = ngto(a, n, z);
	xuat(a, z);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
int ngto(int a[], int n, int &z)
{
	int i, j;
	z =0;
	for (i=1; i < n; i++)
	{
		for (j=2; j<i; j++)
		{
			if (i%j==0)
				break;
			else 
			{
				if (j == i-1)
				{
					a[z] = i;
					z++;
				}
				else
					continue;
			}
		}
	}
	return 1;
}
void xuat(int a[], int z)
{
	
	printf("cac so do la:");
	for (int x = 0; x < z; x++)
	{
		printf("%d, ", a[x]);
	}
}