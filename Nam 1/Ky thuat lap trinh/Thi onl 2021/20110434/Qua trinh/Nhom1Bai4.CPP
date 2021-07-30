#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ghi_file();
void sap_xep(long A[][10], int m);
void xu_ly_file(long A[][10]);

void main()
{
	long A[1000][10];
	ghi_file();
	xu_ly_file(A);
}
	
void xu_ly_file(long A[][10])
{
	FILE *f_out;
	f_out = fopen("SONGUYEN.OUT", "wb");
	if(f_out==NULL)
	{
		printf("Khong mo duoc file");
		exit(0);
	}


	FILE *f_in;
	f_in = fopen("SONGUYEN.INP", "rb");
	if(f_out==NULL)
	{
		printf("Khong mo duoc file");
		exit(0);
	}


	for(int i=0; i<1000; i++)
	{
		for(int k=0; k<10; k++)
			fread(&A[i][k], sizeof(long), 1, f_in);
		sap_xep(A, i);
		for(int j=0; j<10; j++)
			fwrite(&A[i][j], sizeof(long), 1, f_out);
		fprintf(f_out, "\n");
	}


	fclose(f_out);
	fclose(f_in);
}
void sap_xep(long A[][10], int m)
{
	for(int i=1; i<10; i++)
	{
		long t = A[m][i];
		int j = i-1;
		while(j>=0 && t<A[m][j])
		{
			A[m][j+1] = A[m][j];
			j--;
		}
		A[m][j+1] = t;
	}
}
void ghi_file()
{
	FILE *f;
	f = fopen("SONGUYEN.INP", "wb");
	if(f==NULL)
	{
		printf("Khong mo duoc file");
		exit(0);
	}
	srand((unsigned)time(NULL));
	for(int i=0; i<1000; i++)
		for(int j=0; j<10; j++)
		{
			long r = rand()%RAND_MAX;
			fwrite(&r, sizeof(long), 1, f);
		}
	fclose(f);
}



