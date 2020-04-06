#include<stdio.h>

int main()
{
	char *prompt = "prompt>>";
	char command[80];
	
	for(;;)
	{
		fputs(prompt,stdout);
		if(fgets(command,sizeof(command),stdin)==NULL) break;
		system(command);
	}
	fprintf(stdout,"Good bye..");
	system("clear");
	fflush(stdout);
	
	return 0;
}

