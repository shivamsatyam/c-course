#include <stdio.h>
#include<stdlib.h>
int main(){

	int n;
	scanf("%d",&n);	
	int *ptr;
	ptr = (int *)calloc(n,sizeof(int)); //it makes 6 blocks for int with default value 0  	
	int i;
	
	for(i=0;i<n;i++){
		printf("Enter the number \n");
		scanf("%d",&ptr[i]);
	}	
	for(i=0;i<n;i++){
		printf("The element are %d\n",ptr[i]);
		
	}	
	
	free(ptr);
		
	return 0;
}


































