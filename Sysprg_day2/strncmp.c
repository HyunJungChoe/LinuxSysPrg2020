#include<string.h>
#include<stdio.h>

int main()
{
	char * a = "abcdef";
	char * b = "abcdefg";
	printf("%d\n",strncmp(a,b,4)); // 0
	printf("%d\n",strncmp(a,b,5)); // 0
	printf("%d\n",strncmp(a,b,6)); // 0
	printf("%d\n",strncmp(a,"aaaa",6)); // 1
	printf("%d\n",strncmp(b,a,7)); // 103
	printf("%d\n",strncmp(a,b,7)); //-103 널문자 쓰레기 값
	printf("%d\n",strncmp(a,b,8)); //-103
	printf("%d\n",strncmp(a,b,9)); //-103
}

