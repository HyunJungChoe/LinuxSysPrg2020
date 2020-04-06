#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main()
{
	int handle;
	FILE *fp;
	char buf[256];
	fp = fdopen(0,"r");
	handle = fileno(fp);
	printf("handle number: %d\n",handle);
	fclose(fp);
	return 0;
}
