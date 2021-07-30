#include <stdio.h>
void nhan_ma_tran(int mA, int nA, int A[][100], int mB, int nB, int B[][100], int C[][100]);
void xuat_ma_tran(int m, int n, int K[][100]);
void nhap_ma_tran(int &m, int &n, int K[][100]);
void main()
{
	int mA, nA, A[100][100];
	int mB, nB, B[100][100];
	int C[100][100] ={0};

	nhap_ma_tran(mA, nA, A);
	nhap_ma_tran(mB, nB, B);
	if(nA!=mB)
	{
		printf("khong nhan duoc");
		return;
	}
	nhan_ma_tran(mA, nA, A, mB, nB, B, C);

	xuat_ma_tran(mA, nB, C);
}
void nhan_ma_tran(int mA, int nA, int A[][100], int mB, int nB, int B[][100], int C[][100])
{
	for(int i=0; i<mA; i++)
	{
		for(int k=0; k<nB; k++)
		{
			for(int j=0; j<nA; j++)
				C[i][k] +=  A[i][j]*B[j][k];
		}
	}
}
void xuat_ma_tran(int m, int n, int K[][100])
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
			printf("%d ", K[i][j]);
		printf("\n");
	}
}
void nhap_ma_tran(int &m, int &n, int K[][100])
{
	scanf("%d%d", &m, &n);
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			scanf("%d", &K[i][j]);
}
