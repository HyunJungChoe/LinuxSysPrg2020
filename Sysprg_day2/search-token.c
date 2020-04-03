#include<stdio.h>
#include<string.h>

void markLine(char *line, char *start, char *stop)
{
	char *p;
	for(p=line; p < start; p++) *p=' ';
	for(p=start; p <= stop; p++) *p ='^';
	for(p=stop+1; *p != '\0'; p++) *p=' ';
			 
}

char *inputLine(void)
{
int c, n;
static char line[BUFSIZ +1];
	
n=0;
while ((c = getc(stdin)) != '\n'){
	if(c==EOF) return(NULL);
	if(n<BUFSIZ) line[n++]=c;
	
}
line[n] = '\0';
printf("lines ==> %s <==\n",line);
return (line);
}

void outputLine(char *line)
{
	char *p;
	for(p=line; *p != '\0'; p++) putc(*p, stdout);
	putc('\n', stdout);
	
}

int main(int argc, char **argv)
{
	char copyline[1024];
	char *p, *line , *token,*fieldsep;
	
	if (argc != 3)
	{
		 outputLine("Usage: search-token token fieldsep");
		 return -1;
	 }
	 token = argv[1];
	 fieldsep = argv[2];
	 
	 while((line = inputLine()) != NULL) {
		 strcpy(copyline, line);
		if ((p =strtok(line,fieldsep)) ==NULL) continue;
		do {
			printf("token = %s\n",p);
			if( strcmp(p,token) ==0){
				outputLine(copyline);
				//markLine(copyline, copyline + (p - line),
				//	copyline + (p - line) + strlen(token) - 1);		
				//outputLine(copyline);
				p=NULL;
			}
			else
			{
				p=strtok(NULL,fieldsep);
			}
		}while(p != NULL);
	}
	return 0;
}

			
