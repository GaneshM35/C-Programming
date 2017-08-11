/*  There are n children sitting in a circle. All of them are numbered in the clockwise order: the child number 2 sits to the left of the child number 1, the child number 3 sits to the left of the child number 2, ..., the child number 1 sits to the left of the child number n.

Malini has m chocolates. Malini stands in the middle of the circle and starts giving the chocolates to the children starting from child number 1 and moving clockwise. The child number i gets i chocolates. If Malini can't give the current child the required number of chocolates, then Malini takes the remaining chocolates and the process ends. Determine by the given n and m how many chocolates Malini will get in the end.

Input Format

The first line contains two integers n and m (1 ≤ n ≤ 50, 1 ≤ m ≤ 104) — the number of children and the number of chocolates correspondingly.

Output Format

If the input is invalid, print “Invalid Input”

For valid inputs, print the number of chocolates Malini ended up with.

 
 
Sample Input 1:
 4 11
Sample Output 1:

 O
Sample Input 2:

 17 103
Sample Output 2:

 12
Sample Input 3:

 3 8
Sample Output 3 :

 1
Sample Input 4:

 300 8
Sample Output 4 :

 Invalid Input  */



 #include<stdio.h>
int main(){
	int n,m,i=0,total=0,flag=1;
	scanf("%d",&n);
	scanf("%d",&m);
	total=m;
	if((n>0) && (n<51) && (m>0) && (m<105)){
		while(flag){
			for(i=1;i<=n;i++){
				if(total<i){
					flag=0;
					break;
				}
				total=total-i;
			}
		}
		printf("%d"total);
	}else
		printf("\nInvalid Input");
	return 0;
}