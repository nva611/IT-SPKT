#include <stdio.h>
#include <stdlib.h>
void doc_file();
void main()
{
	doc_file();
}
void doc_file()
{
	FILE *f;
	f = fopen("SOCHAN.DAT", "r");
	if(f==NULL)
	{
		printf("Khong mo duoc file");
		exit(0);
	}
	int a;
	for(int i=1; i<=51; i++)
	{
		
		fscanf(f, "%d", &a);
		printf("%d ", a);
		if(i%30==0)
			printf("\n");
	}
	fclose(f);

}