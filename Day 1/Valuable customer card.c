/* Sita owns the valuable customer card in the Personalised Gifts store. Sita purchases 3 gift articles priced at Rs.r1, Rs.r2 and Rs.r3. As a valuable customer she can avail one of the 2 offers --- 20% discount on each of the 3 items purchased or she can go for an offer where she will get 1 item of the lowest cost free .
 

 
Which of the 2 offers would be beneficial for Sita? Can you please help her out?
 
Input Format:
Input consists of 3 integers that correspond to r1, r2 and r3.

Output Format:
Output is a string that is either 'DISCOUNT' or 'FREE ITEM'.
 
Sample Input 1:
25
25
50
Sample Output 1:
FREE ITEM
 
Sample Input 2:
10
70
50
Sample Output 2:
DISCOUNT */

#include<stdio.h>
int main(){
	int r1,r2,r3,discount,free;
	scanf("%d",&r1);
	scanf("%d",&r2);
	scanf("%d",&r3);
	discount=(r1/5)+(r2/5)+(r3/5);
	if(r1<r2 && r1<r3)
		free=r1;
	else if(r2<r1 && r2<r3)
		free=r2;
	else
		free=r3;
	if(discount>free)
		printf("DISCOUNT");
	else
		printf("FREE ITEM");
	return 0;
}