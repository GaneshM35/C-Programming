/* On a sunny holiday morning, Chotta bheem and his team of friends are getting ready to spend a day at “The Summer Fair” that was elaborately set up at their town Dholakpur. They were at the entrance of the fair wherein they were confused to identify proper directions of the various events and games put up there. So they decided to lay a Direction Board at the entrance to help their people reach the desired events hassle free. 

Input Format: 
Input consists of 4 character arrays which corresponds to the different games and events available in the fair. 
Input consists of 4 character arrays to indicate the directions of each of the above mentioned games. 
Output Format: 
Refer Sample Input and Output 

[All text in bold corresponds to input and the rest corresponds to output] 

Sample Input and Output : 

Game 1: 
Roller Coaster 
Direction 1: 
North 
Game 2: 
Giant Wheel 
Direction 2: 
South 
Game 3: 
Horror Show 
Direction 3: 
West 
Game 4: 
Aquarium 
Direction 4: 
East 
DIRECTION BOARD OF THE FAIR 
Roller Coaster-North 
Giant Wheel-South 
Horror Show-West 
Aquarium-East */

#include<stdio.h>
int main(){
	char a1[50],a2[50],a3[50],a4[50],b1[50],b2[20],b3[50],b4[50];
	printf("Game 1:\n");
	gets(a1);
	printf("Direction 1:\n");
	gets(b1);
	printf("Game 2:\n");
	gets(a2);
	printf("Direction 2:\n");
	gets(b2);
	printf("Game 3:\n");
	gets(a3);
	printf("Direction 3:\n");
	gets(b3);
	printf("Game 4:\n");
	gets(a4);
	printf("Direction 4:\n");
	gets(b4);
	printf("DIRECTION BOARD OF THE FAIR\n");
	printf("%s-%s\n",a1,b1);
	printf("%s-%s\n",a2,b2);
	printf("%s-%s\n",a3,b3);
	printf("%s-%s\n",a4,b4);
	return 0;
}