#include <stdio.h>
void nhap(int &a, int A[]);
void MangConDuongDaiNhat(int a, int A[]);
void xuat(int k);
void main()
{
	int a, A[100];
	nhap(a, A);
	MangConDuongDaiNhat(a, A);
}
void nhap(int &a, int A[])
{
	scanf("%d", &a);
	for(int i=0; i<a; i++)
		scanf("%d", &A[i]);
}
void MangConDuongDaiNhat(int a, int A[])
{
	int dem_do_dai=0, d=0;
	int start;
	for(int i=0; i<a; i++)
		if(A[i]>0) //tim vi tri bat dau
		{
			for(int j=i; j<a; j++)
				if(A[j]<=0)
				{
					dem_do_dai = j - i; //do dai cua mang duong thuc
					break;
				}
			if(dem_do_dai>d) //tim mang con duong dai nhat
			{
				d=dem_do_dai;
				start = i;
			}
			i=j; //tiep tuc xet i
		}
	for(i=start; i <start+d; i++)
		xuat(A[i]);
}
void xuat(int k)
{
	printf("%d ", k);
}