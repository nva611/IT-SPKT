#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void ghi_file();
void main()
{
	ghi_file();
}
void ghi_file()
{
	FILE *fi;
	fi = fopen("SONGUYEN.INP", "w");
	if(fi==NULL)
	{
		printf("khong mo duoc file");
		exit(1);
	}
	int r;
	int A[32768] = {0};
	srand((unsigned)time(NULL));
	for(int i = 1; i<=10000; i++)
	{
		r = rand()%32768;
		if(A[r]==0)
		{
			fprintf(fi, "%d ", r);
			A[r] = 1;
		}
		else
			i--;
	}
	fclose(fi);
}


