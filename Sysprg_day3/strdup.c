#include<stdio.h>
#include<string.h>

int main(int argc,char **argv)
{
	char *ptr;
	char src[256] = "string!";
	
	if ((ptr = strdup(src)) == NULL){
		fprintf(stderr,"문자열 복제를 위한 메모리 부족\n");
		return 1;
	}
	
	printf("%s\n",ptr);
	free(ptr);
	return 0;
}

