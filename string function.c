#include<stdio.h>
#include<string.h>

int main(){
	char *st = "Shivam the great";
	/*strlen prints the length of the string exclude the null('\0') character*/
	printf("The length of the string is %d\n",strlen(st));
	
	char *s1 = "This";
	char s2[45];
	strcpy(s2,s1);
	/*strcpy is used to copy the string to another*/
	printf("The string is %s\n",s2);


	/*strcat method concadinate two string it does not include spaces*/
	char t2[34] = "power";
	char *t1 = "of fear";
	
	strcat(t2,t1);
	printf("The string is %s\n",t2);
	
	
	char q2[34] = "power";
	char *q1 = "powez";
	
	/* strcmp matches  two string and if the string matches then it return 0 else 1. */
	/*strcmp return -1 when it compare two chracter and the ascii value of first character - second charcter 
	is negative then it print -1 and positive then it print 1*/
	
	int value = strcmp(q2,q1);
	
	printf("The value given by strcmp is %d\n",value);
	


	return 0;
}













