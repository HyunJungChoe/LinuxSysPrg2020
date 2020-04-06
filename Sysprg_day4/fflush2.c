#include<stdio.h>
char mybuffer[80];
int main()
{
	FILE *pFile;
	pFile = fopen("test.txt","r+");
	if (pFile ==NULL)
		perror("ERROR");
	else{
		fputs("test",pFile);
		fflush(pFile);
		fgets(mybuffer,80,pFile);
		puts(mybuffer);
		fclose(pFile);
		return 0;
	}
}
