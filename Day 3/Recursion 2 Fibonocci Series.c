/*   Write a program to find the nth term in the Fibonocci series using recursion.
Note that the first 2 terms in the Fibonocci Series are 0 and 1.
 
Input and Output Format:
 
Input consists of an integer.
Refer sample input and output for formatting specifications.
All text in bold corresponds to input and the rest corresponds to output.
 
Sample Input and Output:
Enter the value of n
4
The term 4 in the fibonocci series is 2
 


Function Definitions: 

int fib (int n) 



Problem Requirements:
C

Keyword	Min Count	Max Count
for	0	0
Keyword	Min Count	Max Count
while	0	0  
*/


#include<stdio.h>
int fib(int n);
int main(){
	int n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf("The term %d in the fibonocci series is %d\n",n,fib(n));
	return 0;
}
int fib(int n){
	if(n==1)
		return 0;
	if(n==2)
		return 1;
	else
		return fib(n-1)+fib(n-2);
}