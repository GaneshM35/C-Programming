/*  In the Mini project second function is to find factorial of a number. Rita allotted this function to Johnny.
Help Johnny to write a program to find the factorial of a number using functions.

Function Specification:
int factorial(int n);
 
Input Format:
Input consists of 1 integer.
 
Output Format:
Output consists of a single integer.
Refer sample input and output for formatting details.
 
Sample Input:
3
Sample Output:
6


Function Definitions: 

int factorial (int)  */


#include<stdio.h>
int factorial(int n){
	int i,fact=1;
	for(i=n;i>=2;i--){
		fact=fact*i;
	}
	return fact;
}

int main(){
	int value,result;
	scanf("%d",&value);
	result=factorial(value);
	printf("%d",result);
	return 0;
}