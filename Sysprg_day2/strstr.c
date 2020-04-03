#include<string.h>

int main()
{
	char *id = "ID=valentis";
	char *str;
	
	str = strstr(id,"=")+1;
	
	printf("%s\n", str);
	
}
