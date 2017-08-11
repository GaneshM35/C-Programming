/*  A sequence a, a1, ..., at - 1 is called increasing if ai - 1 < ai for each i: 0 < i < t.

You are given a sequence b, b1, ..., bn - 1 and a positive integer d. In each move you may choose one element of the given sequence and add d to it. What is the least number of moves required to make the given sequence increasing?

 
Input Format
The first line of the input contains two integer numbers n and d (2 ≤ n ≤ 20, 1 ≤ d ≤ 103). The second line contains space separated sequence b, b1, ..., bn - 1 (1 ≤ bi ≤ 103).

Output Format
In the 1st line, output the minimal number of moves needed to make the sequence increasing.

In the second line, print the integers in the increasing sequence, separated by a space. There is a trailing space at the end of the line


 

Sample Input

4 2

1 3 3 2

Sample Output

3

1 3 5 6   */


#include<stdio.h>
#include<stdlib.h>
int main(){
	/*int size,diff,value[20],i,count=0;
	scanf("%d %d",&size,&diff);
	for(i=0;i<size;i++){
		scanf("%d",&value[i]);
	}
	for(i=0;i<size-1;i++){
		if(value[i=1]==value[i]){
			value[i+1]=diff+value[i];
			//count++;
		}
		if(value[i+1]<value[i]){
			value[i+1]=value[i]+1;
			//count++;
		}
		count++;
	}
	printf("%d\n",count);
	for(i=0;i<size;i++){
		printf("%d ",value[i]);
	}  */


	int n,d,i,min,count=0;
	scanf("%d %d",&n,&d);
	int *a=(int*)malloc(n * sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",(a+i));
	}
	min=*(a+0);
	for(i=1;i<n;i++){
		if(min<*(a+i))
			min=*(a+i);
		else{
			while(*(a+i)<=min){
				*(a+i)+=d;
				count++;
			}
			min=*(a+i);
		}
	}
	printf("%d\n",count);
	for(i=0;i<n;i++)
		printf("%d ",*(a+i));
	return 0;
}