#include <stdio.h>
#include <math.h>

void nhap(int &n);
void doi_sang_nhi_phan(int n);
void liet_ke_nhi_phan(int n);
int do_rong(int n);

void main()
{
	int n;
	nhap(n);
	liet_ke_nhi_phan(n);
}
int do_rong(int n)
{
	int x = 0;
	while(pow(2, x) <= n)
		x++;
	return x;
}
void doi_sang_nhi_phan(int n)
{
	int i = do_rong(n)-1;;
	while(((n>>i) & 0x1)==0)
			i--;
	for(int j = i; j>=0; j--)
		printf("%d", (n>>j)&0x1 );
}
void liet_ke_nhi_phan(int n)
{
	for(int i=1; i<=n; i++)
	{
		doi_sang_nhi_phan(i);
		printf("\n");
	}
}
void nhap(int &n)
{
	scanf("%d", &n);
}