#include<stdio.h>
#include<string.h>

#define NSTRINGS 16
#define MAXLENGTH 1024
 void bubbleSort(char **, int);
 void outputLine(char *);
 char * inputLine(void);
 
 int main(int argc, char **argv){
	 int n, nstrings;
	 char *p, *q, *line;
	 char *strptrs[NSTRINGS];
	 char strings [NSTRINGS] [MAXLENGTH];
	 
	 for (nstrings =0; nstrings < NSTRINGS; nstrings++){
		 if ((line = inputLine()) == NULL)
		 break;
		 
	for (p = line, q= strings[nstrings]; *p != '\0'; p++, q++)
		*q = *p;
	*q = '\0';
	strptrs[nstrings] = strings[nstrings];
	}
bubbleSort(strptrs, nstrings);
for (n=0; n<nstrings; n++)
	outputLine(strptrs[n]);
	
return 0;
}

void bubbleSort(char ** strings, int nstrings)
{
	int i, j;
	char *tmp;
	int notdone;
	j = nstrings;
	notdone =1;
	
	while(notdone){
		notdone = 0;
		j = j-1;
		
		for (i =0; i <j; i++){
			if (strlen(strings[i]) > strlen(strings[i+1])){
				tmp = strings[i+1];
				strings[i+1] = strings[i];
				strings[i] = tmp;
				notdone =1;
			}
		}
	}
}

char * inputLine(void){
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

int inputChar(void)
{
	return(getc(stdin));
}
void outputChar(char c)
{
	putc(c,stdout);
}




				

