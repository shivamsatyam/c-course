#include<stdio.h>
//strrev(str) used to reverse a string
int main(){
	
	/*
	/0 is a null character which defines the end of the string
	
	*/
	char s[] = {'S','e','r','r','r','\0'};
	char str[] = "Shivam"; // C adds a null character automatically
	
//	printf("%c",s[0]);
//	
//	int i = 0;
//	for(i=0;i<7;i++){
//		printf("%c",str[i]);
//	}
//	

char *ptr = str;
while(*ptr!='\0'){
	printf("The character is %c\n   ",*ptr);
	ptr++;
}

/*convient way of printing string*/
char n[] = "Shivam the great";
printf("%s\n\n",n);
printf("Another way of making and printing string\n\n");

//char *ptr = "yoyoyoyoyoyoyo";
//%s for string
//printf("%s",ptr);



/*String inputing*/
char r[34]; //34 character comes in string

printf("Enter your name\n");
scanf("%s",r);
printf("Your name is %s",r);


/*

changes an array
you cannot change the string  like this 
char a[] = {'r','f','\0'};
a = "the";  invalid


//valid syntax to change
char *pt = "ffddfd";
pt = "efreg"; //valid

*/

	return 0;
}













