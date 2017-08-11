/* Given the coordinates of the lower left corner (x,y), the length (l) and width(w) of 2 rectangles, write a program to find the smallest possible rectangle enclosing the 2 given rectangles.
 
Input and Output Format:
 
The 1st line of the input consists of 4 integers separated by a space that correspond to x, y, l and w of the first rectangle.
The 2nd line of the input consists of 4 integers separated by a space that correspond to x, y, l and w of the second rectangle.
 
Output consists of 4 integers that correspond to x, y, l and w of the Union rectangle.
 
Sample Input :
3 8 1515
2 6 10 10
Sample Output:
2 6 16 17 */

#include<stdio.h>
int main(){
	int x1,x2,y1,y2,l1,l2,w1,w2,xmin,xmax,ymin,ymax,rl,rw;
	scanf("%d%d%d%d",&x1,&y1,&l1,&w1);
	scanf("%d%d%d%d",&x2,&y2,&l2,&w2);

	xmin=x1<x2?x1:x2;
	ymin=y1<y2?y1:y2;

	xmax=(x1+l1)>(x2+l2)?(x1+l1):(x2+l2);
	ymax=(y1+w1)>(y2+w2)?(y1+w1):(y2+w2);

	rl=xmax-xmin;
	rw=ymax-ymin;

	printf("%d %d %d %d",xmin,ymin,rl,rw);

	return 0;
}