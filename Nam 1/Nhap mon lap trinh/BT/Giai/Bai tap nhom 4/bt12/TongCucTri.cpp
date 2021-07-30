#include <stdio.h>
void nhap(int &n, int A[]);
void xuat(int kt);
int laNT(int n);
int Sontcc(int n,int A[]);

void main()
{
	int n, A[1000];
	nhap(n, A);
	int kt=Sontcc(n, A);
	xuat(kt);
}
void nhap(int &n, int A[])
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&A[i]);
}
int laNT(int n)
{
	int count=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
			count++;
	}
	if(count==2)
		return 1;
	else 
		return 2;
}
int Sontcc(int n,int A[])
{
	int i;
	for(i=n-1;i>=0;i--)
   {
	    if(laNT(A[i])==1)
	    return (A[i]); 
   }
	return 0;
}
void xuat(int kt)
{
	printf("%d",kt);
}