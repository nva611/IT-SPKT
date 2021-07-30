#include <stdio.h>

void duong_di_du_lich(int k, int &fee_min, int m);
void khoi_tao(int &m, int &n, int&a);
void xuat(int m);
void coppy_mang(int m);

int A[1000][1000] = {0}; // Bang chi phi
int T[1000]={0}; // Mang check thanh pho da di qua
int X[1000]; // Mang luu lo trinh
int C[1000]; // Chi phi di den thanh pho i la C[i] = C[i-1] + A[X[i-1]][i]
int L[1000]; // Lo trinh toi uu, it chi phi
int fee_min=9999999; // chi phi toi uu

void main()
{
	int a; //thanh pho bat dau
	int n; // so thanh pho
	int m; // so duong di
	
	khoi_tao(m, n, a);
	X[1] = a;
	T[a] = 1;
	C[1] = 0;
	duong_di_du_lich(2, fee_min, m);
	xuat(m);
}
void duong_di_du_lich(int k, int &fee_min, int m)
{
	for(int i=1; i<=m; i++)
	{
		if(T[i]==0)
		{
			X[k] = i;
			C[k] = C[k-1] + A[X[k-1]][i];
			if(C[k]<fee_min)
			{
				if(k<m)
				{
					T[i] = 1;
					duong_di_du_lich(k+1, fee_min, m);
					T[i] = 0;
				}
				else if(C[m] + A[X[m]][X[1]]<fee_min)
				{
					fee_min = C[m] + A[X[m]][X[1]];
					coppy_mang(m);
				}
			}
		}
	}
	
}
void coppy_mang(int m)
{
	for(int i=1; i<=m; i++)
		L[i] = X[i];
}
void xuat(int m)
{
	printf("\n");
	for(int i=1; i<=m; i++)
		printf("%d -> ", L[i]);
	printf("%d\n", L[1]);
	printf("Chi phi: %d", fee_min);
}
void khoi_tao(int &m, int &n, int &a)
{
	scanf("%d%d", &m, &n);
	int x, y;
	for(int k=1; k<=n; k++)
	{
		scanf("%d%d%", &x, &y);
		scanf("%d", &A[x][y]);
	}
	for(int i=1; i<=m; i++)
		for(int j=1; j<=m; j++)
		{
			if(A[i][j]!=0)
				A[j][i] = A[i][j];
		}
	printf("Nhap thanh pho xuat pha: ");
	scanf("%d", &a);
	
}