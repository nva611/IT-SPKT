#include <stdio.h>
void nhap(int &na, int &nb, int A[], int B[]);
void noiAvaB(int na, int nb, int A[], int B[], int C[]);
void xuat(int na, int nb, int C[]);
void main()
{
	int na, nb, A[1000], B[1000], C[2000];
	nhap(na, nb, A, B);
	noiAvaB(na, nb, A, B, C);
	xuat(na, nb, C);
}
void nhap(int &na, int &nb, int A[], int B[])
{
	scanf("%d", &na);
	for(int i=0; i<na; i++)
		scanf("%d", &A[i]);
	scanf("%d", &nb);
	for(int j=0; j<nb; j++)
		scanf("%d", &B[j]);
}
void noiAvaB(int na, int nb, int A[], int B[], int C[])
{
	int i=0, j=1, a=0, b=0;
	int n_min = na;
	if(na<nb)
		n_min = na;
	else
		n_min = nb;
	while(i<n_min*2)
	{
		C[i] = B[b++];
		i+=2;
		C[j] = A[a++];
		j+=2;
	}
	//int k;
	/*if(i<j)
		k = j;
	else
		k = i;*/
	if(na<nb)
		while(b<nb)
			C[i++] = B[b++];
	else
		while(a<na)
			C[i++] = A[a++];
	/*int i=0, a=0, b=0, c=na;
	if(na<nb)
	{
		for(i=0; a<2*na; i++)
		{
			C[i] = A[a++];
			C[++i] = B[b++];
		}
		for(int k = 2*na; k< na + nb; k++)
			C[k] = B[c++];
	}
	else 
	{
		for(i=0; i<nb; i=i+2)
		{
			C[i] = A[a++];
			C[i+1] = B[b++];
		}
		for(int k=nb; k<na; k++)
			C[k] = B[k];
	}*/
}
void xuat(int na, int nb, int C[])
{
	for(int i=0; i<na+nb; i++)
		printf("%d ", C[i]);
}
