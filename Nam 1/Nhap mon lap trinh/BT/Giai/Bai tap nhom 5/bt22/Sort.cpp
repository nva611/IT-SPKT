#include <stdio.h>
void nhap(int &SoDong, int &SoCot, int a[][20]);
void HoanVi(int &x, int &y);
void sort(int a[][20], int SoDong, int SoCot);
void xuat(int a[][20], int SoDong, int SoCot);
void main()
{
	int SoDong, SoCot, a[20][20];
	nhap(SoDong, SoCot, a);
	sort(a, SoDong, SoCot);
	xuat(a, SoDong, SoCot);
}
void nhap(int &SoDong, int &SoCot, int a[][20])
{
	scanf("%d%d", &SoDong, &SoCot);
	for(int i=0; i<SoDong; i++)
		for(int j=0; j<SoCot; j++)
			scanf("%d", &a[i][j]);
}
void HoanVi(int &x, int &y)
{
	int temp=x;
	x=y;
	y=temp;
}
void sort(int a[][20], int SoDong, int SoCot)
{
	int n = SoDong * SoCot;

	for(int i = 0; i < n - 1; i++)
	{
		int h=i / SoCot, k=i % SoCot;
		for(int j = i + 1; j < n; j++)
		{
			
			if(a[h][k] > a[j / SoCot][j % SoCot])
			{
				h=j / SoCot;
				k=j % SoCot;
			}
		}
		HoanVi(a[i / SoCot][i % SoCot], a[h][k]);
	}
}
void xuat(int a[][20], int SoDong, int SoCot)
{
	for(int i=0; i<SoDong; i++)
	{
		for(int j=0; j<SoCot; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}