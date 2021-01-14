#include <stdio.h>

int main(){
	int stu = 3;	
	int sub = 5;
	int marks[3][5];
	int i,j;
	for(i=0;i<stu;i++){
		for(j=0;j<sub;j++){
			printf("Enter the marks of %d student and number is %d\t:  ",i+1,j+1);
			scanf("%d",&marks[i][j]);
		}
	}

	for(i=0;i<stu;i++){
		for(j=0;j<sub;j++){
		printf("The marks of %d and subject is %d is:%d\n",i+1,j+1,marks[i][j]);
		}
	}


	
	


	return 0;
}

