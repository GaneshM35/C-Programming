/* Write a program to print the following series
2 5 11 17 23 31 41 47 59  ...
 
Input and Output Format:
 
Input consists of a single integer that corresponds to n.
Output consists of n integers in the series, separated by a space. There is a trailing space.
 

Sample Input:
5
Sample Output:
2 5 11 17 23  */


#include<stdio.h>
int main(){
	int input,i,num,count,series[200],j=0,k;
	scanf("%d",&input);
	if(input>=1)
		for(num=1;num<=250;num++){
			count=0;
			for(i=2;i<=num/2;i++){
				if(num%i==0){
					count++;
					break;
				}
			}
			if(count==0 && num!=1){
				series[j]=num;
				j++;
			}
		}
	printf("%d ",series[0]);
	for(k=1;k<(input*2);k++)
		if(k%2==0)
			printf("%d ",series[k]);
	return 0;
}