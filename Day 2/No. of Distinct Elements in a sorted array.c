/*  Write a program to find the number of distinct elements in a sorted array.
 
Input Format:
Input consists of n+1 integers. The first integer corresponds to n, the number of elements in the array. The next n integers correspond to the elements in the array. Assume that the maximum value of n is 15.
 
Output Format:
Output consists of a single integer which corresponds to the number of distinct elements in the array.
 
Sample Input:
5
3
3
3
78
90
 
Sample Output:
3   */


#include<stdio.h>
#include<stdlib.h>
int main(){
	/*int *a,t,count=0,i,j;
	scanf("%d",&t);
	a=(int *)malloc(t * sizeof(int));
	for(i=0;i<t;i++){
		scanf("%d",a+i);
	}
	for(i=0;i<t;i++){
		for(j=0;j<i;j++){
			if((a+i)==(a+j)){
				break;
			}
			if((*(a+i))==(*(a+j)))
				count++;
		}
	}
	printf("%d",count);   */

	int arr[15],size,count=0,i,j;
	scanf("%d",&size);
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
		for(j=0;j<i;j++)
			if(arr[i]==arr[j]){
				//count=count+1;
				break;
			}
			if(i==j){
				count++;
				//break;
			}
	}
	printf("%d",count);
	return 0;
}