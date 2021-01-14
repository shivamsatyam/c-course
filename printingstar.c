#include<stdio.h>


void star(int a);
int main(){
	int a;
	printf("Enter the number of star pattern you want");
	scanf("%d",&a);
	star(a);

return 0;
}



void star(int a){
	if(a==0 || a==1){
		printf("*\n");
	}else{
		star(a-1);
		printf("r");
		int h;
		for(h=0;h<(2*a-1);h++){
			printf("*");
		}
		printf("\n");
	
	}
}





















