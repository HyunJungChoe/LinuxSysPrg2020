#include<ctype.h>
#include<stdio.h>
#include<stdbool.h>

int main()
{
	bool bCheck = false;
	char strTemp[]="2Y3y4J";
	
	//isupper
	printf("\n--isupper--\n");
	bCheck=isupper('3');
	printf("'3'< %s\n",bCheck? "True" : "False");
	bCheck=isupper(97);
	printf("97< %s\n",bCheck? "True" : "False");
	bCheck=isupper(strTemp[1]);
	printf("strTemp[1]< %s\n",bCheck? "True" : "False");
	
	//islower
	printf("\n--islower--\n");
	bCheck=islower('3');
	printf("'3'< %s\n",bCheck? "True" : "False");
	bCheck=islower(97);
	printf("97< %s\n",bCheck? "True" : "False");
	bCheck=islower(strTemp[1]);
	printf("strTemp[1]< %s\n",bCheck? "True" : "False");
	
	//isalpha
	printf("\n--isalpha--\n");
	bCheck=isalpha('3');
	printf("'3'< %s\n",bCheck? "True" : "False");
	bCheck=isalpha(97);
	printf("97< %s\n",bCheck? "True" : "False");
	bCheck=isalpha(strTemp[1]);
	printf("strTemp[1]< %s\n",bCheck? "True" : "False");
	
	return 0;
}

	
