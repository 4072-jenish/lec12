/*Q.2 Write a Program to create an Employee Record System with an Array of objects for a given N number of employees using structure. Consider the below-mentioned attributes in the Employee structure:
- emp_id
- emp_name
- emp_age
- emp_role
- emp_city
- emp_experience
- emp_company_name
*/


#include<stdio.h>
#include<string.h>

struct student{
	
	int id;
	char name[200];
	int age;
	char role[100];
	char city [100];
	int experience [100];
	char company[100];
	
	
}
main(){
	struct student s1;
	struct student s2;
    struct student s3;
          
          printf("......employe 1......\n");
    
	printf("Enter employe's Id :-");
	scanf("%d",&s1.id);
    printf("Enter employe's Name :-");
	scanf("%s",&s1.name);
	printf("Enter employe's age :-");
	scanf("%d",&s1.age);
	printf("Enter employe's role :-");
	scanf("%s",&s1.couser);
	printf("Enter employe's city :-");
	scanf("%s",&s1.city);
	printf("Enter employe's experience :-");
	scanf("%d",&s1.std);
	printf("Enter employe's company :-");
	scanf("%s",&s1.school);
	
	printf("Enter employe's id is :-%d\n",s1.id);
	printf("Enter employe's Name is  :-%s\n",s1.name);
	printf("Enter employe's age is :-%d\n",s1.age);
	printf("Enter employe's role is :-%s\n",s1.couser);
	printf("Enter employe's city is :-%s\n",s1.city);
	printf("Enter employe's experience is :-%d\n",s1.std);
	printf("Enter employe's company is :-%s\n",s1.school);
	
	    printf("......employe 2......\n");
	
	printf("Enter employe's Id :-");
	scanf("%d",&s2.id);
    printf("Enter employe's Name :-");
	scanf("%s",&s2.name);
	printf("Enter employe's age :-");
	scanf("%d",&s2.age);
	printf("Enter employe's role :-");
	scanf("%s",&s2.couser);
	printf("Enter employe's city :-");
	scanf("%s",&s2.city);
	printf("Enter employe's experience :-");
	scanf("%d",&s2.std);
	printf("Enter employe's company :-");
	scanf("%s",&s2.school);
	
	printf("Enter employe's id is :-%d\n",s2.id);
	printf("Enter employe's Name is  :-%s\n",s2.name);
	printf("Enter employe's age is :-%d\n",s2.age);
	printf("Enter employe's role is :-%s\n",s2.couser);
	printf("Enter employe's city is :-%s\n",s2.city);
	printf("Enter employe's experience is :-%d\n",s2.std);
	printf("Enter employe's company is :-%s\n",s2.school);
	
	      printf("......employe 3......\n");
	
	printf("Enter employe's Id :-");
	scanf("%d",&s3.id);
    printf("Enter employe's Name :-");
	scanf("%s",&s3.name);
	printf("Enter employe's age :-");
	scanf("%d",&s3.age);
	printf("Enter employe's role :-");
	scanf("%s",&s3.couser);
	printf("Enter employe's city :-");
	scanf("%s",&s3.city);
	printf("Enter employe's company :-");
	scanf("%d",&s3.std);
	printf("Enter employe's school :-");
	scanf("%s",&s3.school);
	
	printf("Enter employe's id is :- %d\n",s3.id);
	printf("Enter employe's Name is  :- %s\n",s3.name);
	printf("Enter employe's age is :- %d\n",s3.age);
	printf("Enter employe's role is :-%s\n",s3.couser);
	printf("Enter employe's city is :-%s\n",s3.city);
	printf("Enter employe's experience is :-%d\n",s3.std);
	printf("Enter employe's company is :-%s\n",s3.school);
	
	
}
