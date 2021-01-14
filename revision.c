#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


void check(char str[]){
	
	char *ptr = str;
while(*ptr!='\0'){

	if((*ptr=='0')||(*ptr=='1')){
		printf("You enter a binary number\n");
	}else{
		printf("The number you enter is not binary\n");
	}
	ptr++;
}

}
void reverse(char std[]){
	char *p = std;
	while(*p!='\0'){
		if(*p=='1'){
			*p = '0';
		}else if(*p=='0'){
			*p='1';
		}
		p++;
		}
		
	}

void change(int  s[], int oi){
	int k = oi;
	int i;
	for(i=0;i<k/2;i++){
		int temp = s[i];
		s[i] = s[k-i-1];
		s[k-1-i] =temp; 
	}
	
}

int main(){
	
	int num;
	char a[54];
	printf("Enter the number\n");
	scanf("%s",a);
	
	check(a);
	reverse(a);
	puts(a);
	printf("\n");
	int pu[] = {1,2,3,4,5,6,7,8};
	change(pu,8);	
	int t;
	for(t=0;t<8;t++){
		printf("\n%d",pu[t]);
	}
	
	
}





















































