/* Dr.Dexter wants Xinyou to be more intelligent in scaling the images, so that he can identify things even if it is zoomed-in or zoomed-out. So he plans to give some input images to Xinyou and ask him to create patterns for the images in different sizes. He found out that giving flag images would help him get trained better.
        Now help Xinyou to create patterns.
 
FLAG VIETNAM 
 
        Write a program to generate the Vietnam country flag pattern.
        In Vietnam flag,
Red color should be represented by “~” symbol.
Star should be represented by “*” symbol. 
 
 
 
Input and Output Format:
Input consists of a single integer, n. Assume that “n” should be odd number.
Number of rows and columns are equal.
Refer sample input and output for formatting specifications.
 
Sample Input 1:
 
3
 
Sample Output 1:
 
~ ~ ~ 
~ * ~ 
~ ~ ~
 
Sample Input 2:
 
7
 
Sample Output 2:
 
~ ~ ~ ~ ~ ~ ~ 
~ ~ ~ ~ ~ ~ ~ 
~ ~ ~ ~ ~ ~ ~ 
~ ~ ~ *  ~ ~ ~ 
~ ~ ~ ~ ~ ~ ~ 
~ ~ ~ ~ ~ ~ ~ 
~ ~ ~ ~ ~ ~ ~  */


#include<stdio.h>
int main(){
	int value,i,j;
	scanf("%d",&value);
	for(i=0;i<value;i++){
		for(j=0;j<value;j++){
			if(i==j && i==(value/2))
				printf("%c ",'*');
			else
				printf("%c ",'~');
		}
		printf("\n");
	}
	return 0;
}