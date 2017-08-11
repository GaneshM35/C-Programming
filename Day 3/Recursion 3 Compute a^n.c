/*  Write a program to compute a^n (a power n) using recursion.
 
Input and Output Format:
 
Input consists of 2 integers.
Refer sample input and output for formatting specifications.
All text in bold corresponds to input and the rest corresponds to output.
 
Sample Input and Output:
Enter the value of a
2
Enter the value of n
8
The value of 2 power 8 is 256
 


Function Definitions: 

int computePower (int a, int n) 



Problem Requirements:
C

Keyword	Min Count	Max Count
while	0	0
Keyword	Min Count	Max Count
for	0	0  
*/


#include<stdio.h>
int computePower(int a,int n);
int main(){
	int a,n;
	printf("Enter the value of a\n");
	printf("Enter the value of n\n");
	scanf("%d %d",&a,&n);
	printf("The value of %d power %d is %d\n",a,n,computePower(a,n));
	return 0;
}
int computePower(int a,int n){
	if(n==0)
		return 1;
	else
		return (a*computePower(a,n-1));
}