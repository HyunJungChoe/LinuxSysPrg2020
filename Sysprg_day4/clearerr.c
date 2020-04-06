#include<stdio.h>

int main(void)
{
	FILE *fp;
	char chr_byte;
	fp=fopen("test.txt","r");
	fputc('j',fp);
	if(ferror(fp)){
		perror("fputc");}
	clearerr(fp);
	if (ferror(fp)){
		perror("clearerr");
	}
	fclose(fp);
	return 0;
}

