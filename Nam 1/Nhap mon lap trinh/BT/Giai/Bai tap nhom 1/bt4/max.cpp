#include <stdio.h>
void nhap(int &a, int &b);
int gtln(int a, int b);
void xuat(int kt, int a, int b);
void main()
{
	int a, b;
	nhap(a, b);
	
	int kt = gtln(a, b);
	
	xuat(kt, a, b);
}
void nhap(int &a, int &b)
{
	scanf("%d%d", &a, &b);
}
int gtln(int a, int b)
{
	if (a>b)
	{	
		return 0;
    }
	else if (a<b)
	{
		return 1;
	}
	else 
		return 2;

}
void xuat(int kt, int a, int b)
{
	if (kt==0)
		printf("Max = %d", a);
	else if (kt==1)
    	printf("Max = %d", b);
	else 
		printf("hai so bang nhau");
}
