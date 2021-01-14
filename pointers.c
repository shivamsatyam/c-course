#include<stdio.h>


void star(int a);
int main(){
	
// A pointer is a variable which stores the address of another variable
//& => the address of operators is used to obtain the address of a given variable

/* *=>value of address operator is used to obtain the value pretend at a given memory addrss. It is denoted by 
star 
*/


/*
How to declare a pointer-:
int *j => declare a variable j of type int-pointer
char *j => declare a variable j of type char-pointer
float *j => declare a variable j of type float-pointer

*/



int i=34;
int *j=&i; // j will store the address of i
int **k = &j; // k is a pointer which store the address of a pointer
// int ***b = &k;// it will store the address of a pointer of a pointer of a variable

//%u for printing the value of address of an variabe
printf("The value of i is %d\n",i);
printf("The value of i given by the pointer is %d\n",*j);
printf("The address of i is %u\n",&i);
printf("The address of i given by the pointers is  %u\n",j);
printf("The address of j is %u\n",&j);
printf("The value of j is %u\n",*(&j));
printf("The value of b is %d\n",*k);



return 0;
}




















