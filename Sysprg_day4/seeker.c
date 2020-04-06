#include<stdlib.h>
#include<stdio.h>

#define NSTRINGS 5
#define STRSIZE 3

char *strings[] ={
	"aaa","bbb","ccc","ddd","eee"};
	
int main(int  argc, char **argv)
{
	int n;
	FILE *fp;
	char *fname;
	char buf[STRSIZE], template[32];
	
	strcpy(template,"/tmp/seekerXXXXXX");
	fname = mktemp(template);
	
	if((fp = fopen(fname,"w+"))==NULL){
		perror(fname);
		return -1;
	}
	for (n=0;n< NSTRINGS; n++)
	{
		fwrite(strings[n],sizeof(char),STRSIZE,fp);
	}
	for (;;)
	{
		printf("Which string (0 to quit)?");
		scanf("%d",&n);
		
		if (n== 0)
		{
			fclose(fp);
			return 0;
		}
		if(n<0 || n > NSTRINGS){
			fprintf(stderr,"OUT of range\n");
			continue;
		}
		
		fseek(fp,(n-1)*STRSIZE,SEEK_SET);
		fread(buf,sizeof(char),STRSIZE,fp);
		
		printf("String %d = %.*s\n\n",n,STRSIZE,buf);
	}
}

		
