#include<stdio.h>
int main()
{
	char buf[BUFSIZ];
	setbuf(stdout,buf);
	printf("hello, "); sleep(1);
	printf("UNIX"); sleep(1);
	printf("\n"); sleep(1);


	setbuf(stdout,NULL);
	printf("HOW ");sleep(1);
	printf("are ");sleep(1);	
	printf("you?");sleep(1);
	printf("\n");sleep(1);
	
	return 0;
}

