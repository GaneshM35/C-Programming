/* Every day few of the customers are given a lucky gift. Lucky gift is given to a customer when his / her bill number ends with the last digit of that day number or when the bill number is a multiple of the day number.
                                                      
Can you help Gita in deciding whether a customer gets the lucky gift or not?
 
Input Format:
Input consists of 2 integers that correspond to the day number in today's date and the bill number.

Output Format:
Output is either 'yes' or 'no'. Output is yes when the customer gets the lucky gift and is no otherwise.
 
Sample Input 1:
5
45
Sample Output 1:
yes
 
Sample Input 2:
14
34
Sample Output 2:
yes
 
Sample Input 3:
5
44
Sample Output 3:
no */

#include<stdio.h>
int main(){
	int date,bill,lastdate,lastbill;
	scanf("%d",&date);
	scanf("%d",&bill);
	lastdate=date%10;
	lastbill=bill%10;
	if(((bill%date)==0)||(lastdate==lastbill)){
		printf("yes");
	}else
		printf("no");
	return 0;
}