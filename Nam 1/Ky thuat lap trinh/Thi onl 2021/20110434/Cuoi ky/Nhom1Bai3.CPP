#include <stdio.h>
#include <stdlib.h>
void ghi_file();
void main()
{
	ghi_file();
}
void ghi_file()
{
	FILE *f;
	f = fopen("SOCHAN.DAT", "w");
	if(f==NULL)
	{
		printf("Khong mo duoc file");
		exit(0);
	}
	for(int i=0; i<=100; i=i+2)
		fprintf(f, "%d ", i);
}