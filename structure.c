#include <stdio.h>
#include<string.h>

int main(){
struct student{
	int roll;
	char subject[10];
	char name[20];
};
// . means member operator
struct student shivam;
shivam.roll = 45;
strcpy(shivam.name,"Shivam");
strcpy(shivam.subject,"Computer");

printf("%d\n",shivam.roll);
printf("%s\n",shivam.name);
printf("%s\n",shivam.subject);

//Making struct for large array

struct large{
	int roll;
	char user[34];
};

struct large facebook[100]; //you can access he struct by using this facebook[0].roll,facebook[1].roll......
// facebook[100].roll
facebook[0].roll = 45;
strcpy(facebook[0].user,"Shivam");

printf("%d\n",facebook[0].roll);
printf("%s\n",facebook[0].user);



struct news{
	char name[20];
	int size;
};

struct news danik = {"Danik",45};
printf("%s\n",danik.name);
printf("%d\n",danik.size);


/*pointers in struct*/
											
typedef struct students{
	int roll;
	char name[23];
	float salary;
}stu;

struct students python;
struct students *ptr;

ptr = &python;
(*ptr).roll = 45;
ptr->salary = 435.5435;
strcpy(ptr->name,"Python");
//strcpy(*(ptr).name,"the power of fear");


/*passing struct to function*/

//void show(struct employee python){
//
//}
/*or*/
											
void show(stu emp){
	printf("The roll is %d\n",emp.roll);	
	printf("The name  is %s\n",emp.name);
	printf("The salary is %f\n",emp.salary);
}
show(python);

	return 0;
}

