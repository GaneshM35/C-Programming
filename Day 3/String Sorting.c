/* Write a program to sort a string in alphabetical order.
 
Input and Output Format:
Input consists of a string. Assume that the input string consists of only letters and the maximum length of the string is 20.
Refer sample input and output for formatting specifications.
All text in bold corresponds to input and the rest corresponds to output.
 
Sample Input and Output:
Enter the input string
Anitha
The output string is Aahint  */


#include<stdio.h>
3include<string.h>
int main(){
	char s[20];
	int i,j,l;
	printf("Enter the input string\n");
	gets(s);
	for(i=0;s[i];i++){
		for(j=i+1;s[j];j++){
			if(s[j]<s[i]){
				l=s[j];
				s[j]=s[i];
				s[i]=l;
			}
		}
	}
	printf("The output string is %s",s);
	return 0;
}