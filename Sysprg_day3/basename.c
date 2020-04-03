#include<libgen.h>
#include<stdio.h>

int main()
{
	char* path = "/home/example/test.c";
	char* tmp[32];
	strcpy(tmp,path);
	printf("basename : %s\n",basename(tmp));
	printf("dirname : %s\n",dirname(tmp));
	return 0;
}
