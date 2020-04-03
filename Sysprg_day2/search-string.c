#include<stdio.h>
#include<string.h>
#include<stdlib.h>
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
	char *p, *line, *string;
	
	if (argc != 2){
		outputLine("Usage : ");
		return -1;
	}
	
	string = argv[1];
	while ((line = inputLine()) !=NULL) {
		if ((p=strstr(line, string)) != NULL) {
			outputLine(line);
			markLine(line, p, p+strlen(string)-1);
			outputLine(line);
		}
	}
	return 0;
}
