#include<stdio.h>

int main(int argc, char **argv)
{
	int c;
	FILE *in, *out;
	
	if (argc != 3){
		fprintf(stderr	,"Usage ~~:\n");
		return -1;
	}
	
	if ((in = fopen (argv[1],"r"))==NULL){
		perror(argv[1]);
		return -1;
	}
	if ((in = fopen (argv[2],"a"))==NULL){
		perror(argv[2]);
		return -1;
	}
	
	while((c = getc(in)) != EOF) putc(c,out);
	
	fclose(out);
	fclose(in);
	return 0;
}

