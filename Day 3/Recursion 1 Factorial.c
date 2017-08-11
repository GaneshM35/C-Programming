/*  Write a program to compute the factorial of a number using recursion.
 
Input and Output Format:
 
Input consists of an integer.
Refer sample input and output for formatting specifications.
All text in bold corresponds to input and the rest corresponds to output.
 
Sample Input and Output:
Enter the value of n
5
The factorial of 5 is 120
 


Function Definitions: 

int computeFactorial (int) 



Problem Requirements:
C

Keyword	Min Count	Max Count
while	0	0
Keyword	Min Count	Max Count
for	0	0    

*/


#include<stdio.h>
int computeFactorial(int n);
int main(){
	int n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf("The factorial of %d id %d\n",n,computeFactorial(n));
	return 0;
}
int computeFactorial(int n){
	if(n==1)
		return n;
	else
		return(n*computeFactorial(n-1));
}