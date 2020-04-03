#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	char *p = malloc(1);  //메모리 할당 
	*p ='m';
	printf("%c\n",*p);당   //m이 출력 
	
	free(p);				// 메모리 해제
	return 0;
}
