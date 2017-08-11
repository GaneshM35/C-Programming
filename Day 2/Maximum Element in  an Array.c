/*  Write a  program to find the maximum element in an array. 

Input Format:

Input consists of n+1 integers. The first integer corresponds to ‘n’ , the size of the array. The next ‘n’ integers correspond to the elements in the array. Assume that the maximum value of n is 15.

Output Format:

Refer  sample output for details.

Sample Input 1:

5

2

3

6

8

1

Sample Output 1:

8 is the maximum element in the array  */


#include<stdio.h>
#include<stdlib.h>
int main(){
	int *a,n,i,max=1;
	scanf("%d",&n);
	a=(int *)malloc(n * sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",a+i);
	}
	for(i=0;i<n;i++){
		if(max<*(a+i)){
			max=*(a+i);
		}
	}
	printf("%d is the maximum element in the array",max);
	return 0;
}