#include<stdio.h>

int change(int *a,int *b);
int main(){
int x = 45;
int y = 67;
printf("The value of a is %d and %d\n",x,y);
change(&x,&y);
printf("The value of a is  and b after swap %d and %d\n",x,y);

return 0;
}


int change(int *a , int *b){
    int temp;
    temp = *a;
    *a = *b;
    b = temp;

}






