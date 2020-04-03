#include<stdlib.h>
#include<string.h>
#include<stdio.h>

char *subopts[]={
	#define COLOR 0
	"color",
	#define SOLID 1
	"solid",
	NULL
};

void outputLine(char *line)
{
	char *p;
	for(p=line; *p != '\0'; p++) putc(*p, stdout);
	putc('\n', stdout);
	
}

int main(int argc, char **argv)
{
	int c;
	char buf[1024];
	extern int optind;
	extern char *optarg;
	char *options, *value;
	
	while((c= getopt(argc, argv, "cf:o:st")) != -1 ){
		switch (c){
			case 'c':
			outputLine("circle");
			break;
			
			case 'f':
			outputLine("filename: ");
			strcat(buf,optarg);
			outputLine(buf);
			break;
			
			case 's':
			outputLine("square");
			break;
			
			case 't':
			outputLine("triangle");
			break;
			
			case '?':
			outputLine("command line error");
			break;
			
			case 'o':
			options = optarg;
			
			while (*options != '\0'){
				switch (getsubopt(&options, subopts, &value)){
					case COLOR:
					if (value != NULL){
						strcpy(buf,"color:");
						strcat(buf,value);
					}
					else{
						strcpy(buf, "missing color");
					}
					outputLine(buf);
					break;
					
					case SOLID:
					outputLine("solid");
					break;
					
					default:
					strcpy(buf,"unknown option: ");
					strcat(buf,value);
					outputLine(buf);
					break;
					
				}
			}
			break;
		}
	}
	for (; optind < argc; optind++){
		strcpy(buf,"extra argument: ");
					strcat(buf,argv[optind]);
					outputLine(buf);
				}
				return 0;
			}
			
			
			
			
			
			
			
