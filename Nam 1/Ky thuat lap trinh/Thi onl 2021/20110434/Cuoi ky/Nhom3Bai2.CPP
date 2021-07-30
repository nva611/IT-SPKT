#include <stdio.h>
int get_bit(int a, int i);
void xoay_phai(int &n, int k);
void bat_bit(int &a, int i);
void tat_bit(int &a, int i);
void nhap(int &n, int &k);
void xuat(int n);
void main()
{
	 int n, k;
	 nhap(n, k);
	 xoay_phai(n, k);
	 xuat(n);
}
void xuat(int n)
{
	printf("%d", n);
}
void xoay_phai(int &n, int k)
{
	for(int i=0; i<k; i++)
	{
		int j = get_bit(n, 0);
		n = n>>(1);
		if(j==1)
			bat_bit(n, 31);
		else
			tat_bit(n, 31);
	}
}
void bat_bit(int &a, int i)
{
	a = a | (0x1<<i);
}
void tat_bit(int &a, int i)
{
	a = a&(~(0x1<<i));
}
int get_bit(int a, int i)
{
	return (a>>i) & 0x1;		
}
void nhap(int &n, int &k)
{
	scanf("%d%d", &n, &k);
}
