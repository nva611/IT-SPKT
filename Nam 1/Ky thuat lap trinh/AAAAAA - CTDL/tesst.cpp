#include <stdio.h>
#include <string.h>

int main()
{
	char s[10];
	char x[] = "an";
	char y[] = "an";
	if(strcmp(x, y) == 0)
		printf("OK\n");
	
	strcpy(s, "HELLO");
	printf("%s", s);
	return 0;
}
