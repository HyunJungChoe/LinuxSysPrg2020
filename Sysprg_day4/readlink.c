#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>

int main()
{
	char buf[200];
	int n;
	
	n = readlink("/dev/stdin",buf,200);
	buf[n] ='\0';
	
	printf("%s\n", buf);
	return 0;
	
}
