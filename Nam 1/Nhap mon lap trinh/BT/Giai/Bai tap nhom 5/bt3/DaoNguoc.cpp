#include <stdio.h>
#include <string.h>
void main()
{
	char S[1000];
	gets(S);
	strrev(S);
	printf("%s", S);
}