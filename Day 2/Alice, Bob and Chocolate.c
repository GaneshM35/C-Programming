/* Alice and Bob like games. And now they are ready to start a new game. They have placed n chocolate bars in a line. Alice starts to eat chocolate bars one by one from left to right, and Bob — from right to left. For each chocololate bar the time, needed for the player to consume it, is known (Alice and Bob eat them with equal speed). When the player consumes a chocolate bar, he immediately starts with another. It is not allowed to eat two chocolate bars at the same time, to leave the bar unfinished and to make pauses. If both players start to eat the same bar simultaneously, Bob leaves it to Alice as a true gentleman.

How many bars each of the players will consume?

Input Format

The first line contains one integer n (1 ≤ n ≤ 105) — the amount of bars on the table. The second line contains a sequence t1, t2, ..., tn (1 ≤ ti ≤ 1000), where ti is the time (in seconds) needed to consume the i-th bar (in the order from left to right).

Output Format

Print two numbers a and b, where a is the amount of bars consumed by Alice, and b is the amount of bars consumed by Bob.

 
Sample Input :

 5
2 9 8 2 7
Sample Output :

 2 3  */


#include<stdio.h>
#include<stdlib.h>

int* create(int n){
	int* a;
	a=(int*)malloc(n * sizeof(int));
	return a;
}

int read(int* a,int n){
	int i;
	for(i=0;i<n;i++)
		scanf("%d",a+i);
}

int compute(int* a,int n){
	int 
}

int main(){
	int *a,size;
	scanf("%d",&size);
	a=create(size);
	read(a,size);
	compute(a,size);
	return 0;
}