/*  An upper triangular matrix is a square matrix in which all the elements below the diagonal are zero.

That is, all the zero or non-zero elements are in the upper triangle.

Write a C program to find whether a given matrix is an upper triangular matrix or not.
 
Input Format:
The input consists of (n*n+1) integers.
The first integer corresponds to the number of rows/columns in the matrix.
The remaining integers correspond to the elements in the matrix. The elements are read in rowwise order, first row first, then second row and so on. Assume that the maximum value of m and n is 5.
 
Output Format:
Print yes if it is an upper triangular matrix . Print no if it is not an upper triangular matrix.
Refer sample input and output for formatting details.
 
Sample Input 1:
2
1 2
0 3
Sample Output 1:
yes
 
Sample Input 2:
2
1 2
3 3
Sample Output 2:
no    */


#include<stdio.h>
#include<stdlib.h>

int** create(int n){
	int **a,i;
	a=(int**)malloc(n * sizeof(int*));
	for(i=0;i<n;i++)
		*(a+i)=(int*)malloc(n * sizeof(int));
	return a;
}

int read(int** a,int n){
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",(*(a+i)+j));
	return 0;
}

int compute(int n,int** a){
	int i,j,flag=1;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",(*(a+i)+j));
	return 0;
}

int compute(int n,int** a){
	int i,j,flag=1;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if((j<i) && (*(*(a+i)+j))!=0)
				flag=0;
		if(flag==0)
			printf("no");
		else
			printf("yes");
		return 0;
}

int main(){
	int **a,size;
	scanf("%d",&size);
	a=create(size);
	read(a,size);
	compute(size,a);
	return 0;
}