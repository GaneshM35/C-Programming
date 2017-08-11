/* One hot summer day Peter and his friend Billy decided to buy a watermelon. They chose the biggest and the ripest one, in their opinion. After that the watermelon was weighed, and the scales showed w kilos. They rushed home, dying of thirst, and decided to divide the berry, however they faced a hard problem.
 
Peter and Billy are great fans of even numbers, that's why they want to divide the watermelon in such a way that each of the two parts weighs even number of kilos, at the same time it is not obligatory that the parts are equal. But the difference between the 2 parts should be minimal. The boys are extremely tired and want to start their meal as soon as possible, that's why you should help them and find out, if they can divide the watermelon in the way they want. For sure, each of them should get a part of positive weight.
 
Input Format
The first (and the only) input line contains integer number w (1 ≤ w ≤ 100) — the weight of the watermelon bought by the boys.
 
Output Format
If the input value is not within the range, print "Invalid Input".
In the first line of the output, print YES, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos; and NO in the opposite case.
If the first line of the output is YES, the next line of the output consists of 2 integers separated by a space. In case of distinct integers, the smallest number should appear first.
 
Sample Input 1
8
 
Sample Output 1
YES
4 4
 
Sample Input 2
11
 
Sample Output 2
NO
 
Sample Input 3
124
 
Sample Output 3
Invalid Input  */


#include<stdio.h>
int main(){
	int weight,weight1,weight2;
	scanf("%d",&weight);
	if(weight<1 || weight>100){
		printf("Invalid Input");
	}else if(weight==1 || weight==2){
		printf("NO");
	}else if(weight%2==0){
		printf("YES\n");
		weight1=weight/2;
		if((weight1%2)!=0){
			weight2=weight1-1;
			weight1=weight1+1;
			printf("%d %d",weight2,weight1);
		}else{
			weight1=weight/2;
			weight2=weight1;
			printf("%d %d",weight1,weight2);
		}
	}else
		printf("NO");
	return 0;
}