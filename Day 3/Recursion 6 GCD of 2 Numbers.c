/*  Write a program to compute GCD of 2 numbers using recursion.
 
Input and Output Format:
 
Input consists of 2 integers.
Refer sample input and output for formatting specifications.
All text in bold corresponds to input and the rest corresponds to output.
 
Sample Input and Output:
Enter two positive integers
36
27
G.C.D of 36 and 27 = 9
 


Problem Requirements:
C

Keyword	Min Count	Max Count
while	0	0
Keyword	Min Count	Max Count
for	0	0

Function Definitions: 

int gcd (int n1, int n2)   */


#include<stdio.h>
int gcd(int n1,int n2);
int main(){
	int n1,n2;
	printf("Enter two positive intergers\n");
	scanf("%d %d",&n1,&n2);
	printf("G.C.D of %d and %d = %d\n",n1,n2,gcd(n1,n2));
	return 0;
}
int gcd(int n1,int n2){
	if(n2!=0)
		return gcd(n2,n1%n2);
	else
		return n1;
}