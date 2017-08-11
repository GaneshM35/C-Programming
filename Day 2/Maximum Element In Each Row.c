/*  Write a program to find the maximum element in each row of the matrix.
 
Input Format:
The input consists of (m*n+2) integers. The first integer corresponds to m, the number of rows in the matrix and the second integer corresponds to n, the number of columns in the matrix. The remaining integers correspond to the elements in the matrix. The elements are read in rowwise order, first row first, then second row and so on. Assume that the maximum value of m and n is 10.
 
Output Format:
Refer sample output for details.
 
Sample Input 1:
 
3
2
4 5
6 9
0 3
 
Sample Output 1:
 
5
9
3   */


#include<stdio.h>
#include<stdlib.h>
int main(){
	/*int mat[10][10];
	int r,c,i,j,big;
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scnaf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<r;i++){
		big=0;
		for(j=0;j<c;j++){
			if(big<mat[i][j]){
				big=mat[i][j];
			}
		}
		printf("%d\n",big);
	}  */

	int row,col,**a,i,j,big;
	scanf("%d %d",&row,&col);
	a=(int**)malloc(row * sizeof(int*));
	for(i=0;i<row;i++)
		*(a+i)=(int*)malloc(col * sizeof(int));
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",(*(a+i)+j));

	for(i=0;i<row;i++){
		big=0;
		for(j=0;j<col;j++){
			if(big<*(*(a+i)+j))
				big=*(*(a+i)+j);
		}
		printf("%d\n",big);
	}
	return 0;
}