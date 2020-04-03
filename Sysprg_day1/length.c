#include<stdio.h>

int string_length(char * pstr)
{
	int len = 0;
	while(*pstr++) len++;
	return len;
}

int main (int argc, char **argv)
{
	int len;
	len = string_length("korea");
	printf("length : %d \n",len);
	return 0;
	
}
