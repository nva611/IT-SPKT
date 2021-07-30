#include <stdio.h>
#include <string.h>
void xuat(char A[], char B[], int X[][100]);
void xau_con_chung_dai_nhat(char A[], char B[], int X[][100]);
void main()
{
	char A[100], B[100];
	int X[100][100] = {0};
	gets(A);
	gets(B);
	xau_con_chung_dai_nhat(A, B, X);
	xuat(A, B, X);
}
void xau_con_chung_dai_nhat(char A[], char B[], int X[][100])
{
	int nA = strlen(A);
	int nB = strlen(B);
	for(int i=1; i<=nA; i++)
	{
		for(int j=1; j<=nB; j++)
		{
			if(A[i-1] == B[j-1])
				X[i][j] = X[i-1][j-1] + 1;
			else if(X[i-1][j] > X[i][j-1])
				X[i][j] = X[i-1][j];
			else
				X[i][j] = X[i][j-1];					
		}
	}
}
void xuat(char A[], char B[], int X[][100])
{
	int i = strlen(A);
	int j = strlen(B);
	char C[1000];
	int nC=0;
	while(1)
	{
		if(A[i-1]==B[j-1])
		{
			C[nC++] = A[i-1];
			i--;
			j--;
		}
		else if(X[i-1][j] == X[i][j-1])
			i--;
		else
			j--;
		if(i==0 || j==0)
			break;
	}
	C[nC] = '\0';
	strrev(C);
	printf("%s", C);
}