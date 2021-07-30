#include <stdio.h>
void nhap(int &n);
int ngto(int n);

void main()
{
	int n; 
	nhap(n);
	int kq = ngto(n);	
}
void nhap(int &n)
{
	scanf("%d", &n);
}
int ngto(int n)
{
	int i, j;
	int z =0;
	for (i=2; i < n; i++)
	{
		for (j=2; j<=i; j++)
		{
			if (i%j==0 && i != j)
				break;
			else 
			{
				if(j == i)
				{
					printf("%d, ", i);
				}
				else
					continue;
			}
		}
	}
	return 1;
}
