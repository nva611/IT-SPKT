#include <stdio.h>
#define Infinity_Min -9999999,99
void nhap(int &M, int &N, float A[][101]);
int laDiemLoi(float A[][101], int i, int j);
int timDiemLoiNhoNhat(int M, int N, float A[][101]);
void xuatVtri(int i, int j);
void xuat(int kq);
void main()
{
	float A[101][101];
	int M, N;
	nhap(M, N, A);
	int kq = timDiemLoiNhoNhat(M, N, A);
	if(kq==-1)
		xuat(kq);
}
void nhap(int &M, int &N, float A[][101])
{
	for(int i=0; i<101; i++)
		for(int j=0; j<101; j++)
			A[i][j]=Infinity_Min;
	scanf("%d%d", &M, &N);
	for(i=1; i<M+1; i++)
		for(int j=1; j<N+1; j++)
			scanf("%f", &A[i][j]);
}
int laDiemLoi(float A[][101], int i, int j)
{
	int X[4] = {-1, 0, 1, 0};
	int Y[4] = {0, 1, 0, -1};
	for(int k=0; k<4; k++)
		if(A[i][j]<=A[i+X[k]][j+Y[k]])
			return 0;
	return 1;
}
int timDiemLoiNhoNhat(int M, int N, float A[][101])
{
	int tim;
	int x, y;
	int k, h;
	int i, j;
	for(k=1; k<M+1; k++)
	{
		tim =0;
		for(h=1; h<N+1; h++)
			if(laDiemLoi(A, k, h)==1)
			{
				x = k;
				y = h;
				tim =1;
				break;
			}
		if(tim==1)
			break;
	}
	if(tim==0)
		return -1;
	for(i=k; i<M+1; i++)
		for(j=h; j<N+1; j++)
		{
			if(laDiemLoi(A, i, j)==1 && A[x][y]>A[i][j])
			{
				x = i;
				y = j;
			}
		}
	xuatVtri(x-1, y-1);
	return 0;
}
void xuatVtri(int i, int j)
{
	printf("%d %d", i, j);
}
void xuat(int kq)
{
	printf("%d", kq);
}