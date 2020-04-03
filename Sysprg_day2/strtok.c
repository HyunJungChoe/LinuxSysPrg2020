#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[] = "Linux is Evolution", *ptr;
	int ndx;
	
	ptr = strtok(str," ");
	printf("%s\n",ptr);
	while(ptr = strtok(NULL, " " )) printf("%s\n",ptr);
	return 0;
}

