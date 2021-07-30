#include <stdio.h>
void xuat(int kq);
int timKiemNhiPhan(int x, int n, int A[]);
void nhapSoCanTim(int &x);
void nhap(int &n, int A[]);
void main()
{
	int n, x, A[1000];
	nhap(n, A);
	nhapSoCanTim(x);
	int kq = timKiemNhiPhan(x, n, A);
	xuat(kq);
}
void nhap(int &n, int A[])
{
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &A[i]);
}
void nhapSoCanTim(int &x)
{
	scanf("%d", &x);
}
int timKiemNhiPhan(int x, int n, int A[])
{
	int l = 0;
	int r = n - 1;
	
	while(l<=r)
	{
		int mid = (l+r)/2;
		if(x==A[mid])
			return mid;
		if(x<A[mid])
			r = mid - 1;
		if(x>A[mid])
			l = mid + 1;
	}
	return -1;
}
void xuat(int kq)
{
	printf("%d", kq);
}