/*
 Q.1 Write a Program to create Student Record System for 3 students using structure. Consider the below-mentioned attributes in the Student structure:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_city
- stu_standard
- stu_school
*/

#include<stdio.h>
#include<string.h>

struct student{
	
	int id;
	char name[200];
	int age;
	char couser[100];
	char city [100];
	int std [100];
	char school[100];
	
	
}
main(){
	struct student s1;
	struct student s2;
    struct student s3;
          
          printf("......student 1......\n");
    
	printf("Enter student's Id :-");
	scanf("%d",&s1.id);
    printf("Enter student's Name :-");
	scanf("%s",&s1.name);
	printf("Enter student's age :-");
	scanf("%d",&s1.age);
	printf("Enter student's course :-");
	scanf("%s",&s1.couser);
	printf("Enter student's city :-");
	scanf("%s",&s1.city);
	printf("Enter student's standard :-");
	scanf("%d",&s1.std);
	printf("Enter student's school :-");
	scanf("%s",&s1.school);
	
	printf("Enter student's id is :-%d\n",s1.id);
	printf("Enter student's Name is  :-%s\n",s1.name);
	printf("Enter student's age is :-%d\n",s1.age);
	printf("Enter student's course is :-%s\n",s1.couser);
	printf("Enter student's city is :-%s\n",s1.city);
	printf("Enter student's standard is :-%d\n",s1.std);
	printf("Enter student's school is :-%s\n",s1.school);
	
	    printf("......student 2......\n");
	
	printf("Enter student's Id :-");
	scanf("%d",&s2.id);
    printf("Enter student's Name :-");
	scanf("%s",&s2.name);
	printf("Enter student's age :-");
	scanf("%d",&s2.age);
	printf("Enter student's course :-");
	scanf("%s",&s2.couser);
	printf("Enter student's city :-");
	scanf("%s",&s2.city);
	printf("Enter student's standard :-");
	scanf("%d",&s2.std);
	printf("Enter student's school :-");
	scanf("%s",&s2.school);
	
	printf("Enter student's id is :-%d\n",s2.id);
	printf("Enter student's Name is  :-%s\n",s2.name);
	printf("Enter student's age is :-%d\n",s2.age);
	printf("Enter student's course is :-%s\n",s2.couser);
	printf("Enter student's city is :-%s\n",s2.city);
	printf("Enter student's standard is :-%d\n",s2.std);
	printf("Enter student's school is :-%s\n",s2.school);
	
	      printf("......student 3......\n");
	
	printf("Enter student's Id :-");
	scanf("%d",&s3.id);
    printf("Enter student's Name :-");
	scanf("%s",&s3.name);
	printf("Enter student's age :-");
	scanf("%d",&s3.age);
	printf("Enter student's course :-");
	scanf("%s",&s3.couser);
	printf("Enter student's city :-");
	scanf("%s",&s3.city);
	printf("Enter student's standard :-");
	scanf("%d",&s3.std);
	printf("Enter student's school :-");
	scanf("%s",&s3.school);
	
	printf("Enter student's id is :- %d\n",s3.id);
	printf("Enter student's Name is  :- %s\n",s3.name);
	printf("Enter student's age is :- %d\n",s3.age);
	printf("Enter student's course is :-%s\n",s3.couser);
	printf("Enter student's city is :-%s\n",s3.city);
	printf("Enter student's standard is :-%d\n",s3.std);
	printf("Enter student's school is :-%s\n",s3.school);
	
	
}
