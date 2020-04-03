#include<stdio.h>
#include<string.h>
#include<stdlib.h>

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

int main(int argc, char **argv)
{
	char *line;
	char **strptrs = NULL;
	int n, nstrings, nstrptrs;
	nstrings=0;
	nstrptrs=0;
	
	while((line = inputLine()) !=NULL){
		if (nstrings == nstrptrs){
			if (nstrptrs==0){
				nstrptrs =8;
				strptrs = malloc(nstrptrs *sizeof(char *));
			}else{
				nstrptrs += 8;
				strptrs = realloc(strptrs, nstrptrs *sizeof(char *));
			}
			if (strptrs == NULL) {
				outputLine("out of memory");
				return -1;
			}
		}
		strptrs[nstrings++] = strdup(line);
	}
	bubbleSort(strptrs, nstrings);
	for (n=0; n<nstrings; n++){
		outputLine(strptrs[n]);
		free(strptrs[n]);
	}
	free(strptrs);
	return 0;
}

	

