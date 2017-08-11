/*  Create a structure called Student.
 
struct Student
{
char name[30];
char department[20];
int yearOfStudy;
float cgpa;
};
 
Write a program to get the details of n students and to display their details, sorted in ascending order based on name.
.
 
Input and Output Format:
Refer sample input and output for formatting specification.
All float values are displayed correct to 2 decimal places.
All text in bold corresponds to input and the rest corresponds to output.
 
Sample Input and Output:
Enter the number of students
3
Enter the details of student 1
Enter name
Anitha
Enter department
CSE
Enter year of study
3
Enter cgpa
9.5
Enter the details of student 2
Enter name
Babu
Enter department
IT
Enter year of study
2
Enter cgpa
7.6
Enter the details of student 3
Enter name
Chitra
Enter department
ECE
Enter year of study
4
Enter cgpa
8.4
Details of students
Student 1
Name : Anitha
Department : CSE
Year of study : 3
CGPA : 9.50
Student 2
Name : Babu
Department : IT
Year of study : 2
CGPA : 7.60
Student 3
Name : Chitra
Department : ECE
Year of study : 4
CGPA : 8.40   */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	Struct Student{
		char name[30];
		char department[30];
		int yearOfStudy;
		float cgpa;
	};

	int i,j,n,c=0;
	printf("\nEnter the number of students");
	scanf("%d",&n);
	struct Student s[n];
	for(i=0,i<n;i++){
		printf("\nEnter the details of student %d",++c);
		printf("\nEnter name");
		scanf("%s",(s[i].name));
		printf("\nEnter department");
		scanf("%s",(s[i].department));
		printf("\nEnter year of study");
		scanf("%d",(s[i].yearOfStudy));
		printf("\nEnter cgpa");
		scanf("%f",(s[i].cgpa));
	}
	printf("\nDetails of students");
	struct Student temp;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(s[i].name,s[j].name)>0){
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("\nStudent %d",i+1);
		printf("\nName : %s",s[i].name);
		printf("\nDepartment : %s",s[i].department);
		printf("\nYear of study : %d",s[i].yearOfStudy);
		printf("\nCGPA : %.2f",s[i].cgpa);
	}
	return 0;
}

