#include <stdio.h>
#include <math.h>
int do_rong(unsigned int n);
int dem_bit(unsigned int n);
void xuat(int k);
void nhap(unsigned int &n);
void main()
{
	unsigned int n;
	nhap(n);
	int kq = dem_bit(n);
	xuat(kq);
}
int do_rong(unsigned int n)
{
	int x = 0;
	while(pow(2, x)<=n)
		x++;
	return x;
}
int dem_bit(unsigned int n)
{
	int dem=0;
	int i = do_rong(n)-1;
	while(i>=0)
	{
		if((n>>i) & 0x1 ==1)
			dem++;
		i--;
	}
	return dem;
}
void xuat(int k)
{
	printf("%d", k);
}
void nhap(unsigned int &n)
{
	scanf("%d", &n);
}
