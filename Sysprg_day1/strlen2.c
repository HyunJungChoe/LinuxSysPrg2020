#include<stdio.h>
#include<string.h>

int main(){
	char *s1  = "hello";
	char s2[10] = "Hello";
	
	printf("%d\n",strlen(s1));
	printf("%d\n",strlen(s2));
	printf("%d\n", strlen(&s2[1]));
	
	return 0;
}
