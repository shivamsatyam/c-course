#include<stdio.h>

int main(){
	
	int a=54;
	int *b = &a;
	int &c = &a;
	printf("The value of a id %d\n",a);
	printf("The value of *b id %d\n",*b);
	printf("The value of c id %u\n",c);
	
	return 0;
}



































