#include<stdio.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	char buf[256];
	if((fp = fopen(argv[1],"W+")) ==NULL){
		perror("fopen error");
		return -1;
	}
	fputs("input String >>",stdout);
	gets(buf);
	fputs(buf,fp);
	rewind(fp);
	fgets(buf, sizeof(buf),fp);
	puts(buf);
	fclose(fp);
	return 0;
}
