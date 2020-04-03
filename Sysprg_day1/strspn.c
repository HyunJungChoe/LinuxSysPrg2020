#include<stdio.h>
#include<string.h>

int main()
{
	char string[] = "a1b2c3 A1B2C3";
	char strCharset[] = "12ab";
	int nIndex=0;

	nIndex =strspn(string, strCharset);
	printf("index : %d, %s\n",nIndex,&string[nIndex]);
	
	nIndex = strcspn(string,"ABC");
	printf("index : %d, %s\n", nIndex, &string[nIndex]);

	return 0;


}
