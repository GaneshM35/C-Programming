/* Write a program to generate the given pattern.
 
Input and Output Format:
 
Input consists of a single integer that corresponds to n.
Assume that 0<n<=26.
 
Refer sample output for output formatting specifications.
 
Sample Input 1 :
5
Sample Output 1:
ABCDE
BCDEA
CDEAB
DEABC
EABCD
 
Sample Input 2 :
6
Sample Output 2:
ABCDEF
BCDEFA
CDEFAB
DEFABC
EFABCD
FABCDE  */


#include<stdio.h>
int main(){
	char alpha[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int number,i,j,k,temp;
	scanf("%d",&number);

	for(i=0;i<number;i++){
		printf("%c",alpha[i]);
	}	
	for(k=0;k<number-1;k++){
		for(i=0;i<number-1;i++){
			temp=alpha[0];
			for(j=0;j<number-1;j++){
				alpha[j]=alpha[j+1];
			}
			alpha[number-1]=temp;
			printf("\n");
			for(i=0;i<number;i++){
				printf("%c",alpha[i]);
			}
		}
	}
	return 0;
}