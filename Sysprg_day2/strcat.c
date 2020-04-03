#include<stdio.h>
#include<string.h>

int main()
{
	char buff[100] = "note ";
	char * pstr = "book";
	char *p;
	strcat(buff, pstr); //notebook
	puts(buff);
	strncat(buff,"12345",3); //note123
	puts(buff);
	strcat(p,buff);
	puts(p);
	strcat(pstr,buff);
	puts(pstr);
}

