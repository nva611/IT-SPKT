#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void ghi_file();
void ghi_file_chan_le();
void main()
{
	ghi_file();
	ghi_file_chan_le();
}

void ghi_file_chan_le()
{
	FILE *f_doc, *f_chan, *f_le;

	f_doc = fopen("SONGUYEN.INP", "r");
	if(f_doc==NULL)
	{
		printf("Khong mo duoc file");
		exit(0);
	}

	f_chan = fopen("SOCHAN.OUT", "w");
	if(f_chan==NULL)
	{
		printf("Khong mo duoc file");
		exit(0);
	}

	f_le = fopen("SOLE.OUT", "w");
	if(f_le==NULL)
	{
		printf("Khong mo duoc file");
		exit(0);
	}


	int a;
	for(int i=0; i<100; i++)
	{
		fscanf(f_doc, "%d", &a);
		if(a%2==0)
			fprintf(f_chan, "%d ", a);
		else
			fprintf(f_le, "%d ", a);
	}
	fclose(f_doc);
	fclose(f_chan);
	fclose(f_le);
}
void ghi_file()
{
	FILE *f;
	f = fopen("SONGUYEN.INP", "w");
	if(f==NULL)
	{
		printf("Khong mo duoc file");
		exit(0);
	}
	long r;
	srand((unsigned) time(NULL));
	for(int i=0; i<100; i++)
	{
		long r = rand()%1000;
		fprintf(f, "%d ", r);
	}
	fclose(f);
}