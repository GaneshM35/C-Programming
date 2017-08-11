/* A maths teacher asks her students to give 3 examples for positive odd numbers. When the student specifies a correct answer, his/her score is incremented by 1. When the student specifies a positive even number, his/her score is decremented by 0.5. When the student specifies a negative number, he/she will not be given any more chances to correct his or her mistake and his/her score will be decremented by 1. So a student's turn comes to an end when he/she has correctly specified 3 positive odd numbers or when the student has specified a negative number.
Few students didn't know the difference between odd numbers and even numbers and they made many mistakes and so it was difficult for the teacher to maintain the scores. The teacher asks for your help.
Can you please help her by writing a  program to calculate the score?
Input Format:
Input consists of a list of integers.
Output Format:
Output consists of a single line. The score needs to be displayed correct to 1 decimal place. Refer sample output for details.
[For this exercise, don't worry about duplicate odd numbers. Even if the students specifies the same odd number thrice, it is accepted].

 

Sample Input 1:
1
3
5
Sample Output 1:
3.0
 
Sample Input 2:
1
2
5
6
7
Sample Output 2:
2.0
 
Sample Input 3:
2
-4
Sample Output 3:
-1.5
 
Sample Input 4:
3
3
3
Sample Output 4:
3.0  */


#include<stdio.h>
int main(){
	int num,oddcount=0;
	float marks=0.0;
	while(1){
		scanf("%d",&num);
		if(num<1){
			mark-=1;
			break;
		}
		if(num%2==0){
			marks-=0.5;
		}
		if(num%2!=0){
			marks+=1;
			oddcount+=1;
		}
		if(oddcount==3){
			break;
		}
	}
	printf("%.1f",marks);
	return 0;
}