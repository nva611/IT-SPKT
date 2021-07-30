#include <stdio.h>
void nhap(int &n);
int sodaonguoc(int n);
void xuat(int z, int n);
void main()
{
	int n;
	nhap(n);
	int kq = sodaonguoc(n);
	xuat(kq, n);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
int sodaonguoc(int n)
{
	int m = 0;
	int k = n;
	while (n >0)
	{
		int t = n%10;
		n = n/10;
		m = 10*m + t;
	}
	if (m == k)
		return 1;
	else 
		return 0;
}
void xuat(int z, int n)
{
	if ( z==1)
		printf("%d la so doi xung", n);
	else 
		printf("%d khong la so doi xung", n);

}