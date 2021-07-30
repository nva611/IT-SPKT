#include <stdio.h>
void nhap(int &na, int &nb, int A[], int B[]);
void ghep_xen_ke_A_B(int na, int nb, int A[], int B[], int C[]);
void xuat(int na, int nb, int C[]);
void main()
{
	int na, nb, A[1000], B[1000], C[2000];
	nhap(na, nb, A, B);
	ghep_xen_ke_A_B(na, nb, A, B, C);
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
void ghep_xen_ke_A_B(int na, int nb, int A[], int B[], int C[])
{
	int i=0, j=1, a=0, b=0;
	int n_min = nb;

	if(na<nb)
		n_min = na;

	while(i<n_min*2)
	{
		C[i] = B[b++];
		i+=2;
		C[j] = A[a++];
		j+=2;
	}
	if(na<nb)
		while(b<nb)
			C[i++] = B[b++];
	else
		while(a<na)
			C[i++] = A[a++];
}
void xuat(int na, int nb, int C[])
{
	for(int i=0; i<na+nb; i++)
		printf("%d ", C[i]);
}