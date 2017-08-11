/*  The game of Snakes and Ladder is played by two or more players who take turns rolling a dice. There is usually 1 dice but more than 1 can also be used. The board is a 10 x 10 matrix with numbers starting from 1 from left bottom cell. The numbers increment by 1 as we move from left to right starting from 1. At number 10, we are at end of row 1. Number 11 starts from right most cell in row 2. The numbers move along until we reach 100 in the left top cell of the board.

There are snakes and ladders connecting different cells. The snakes have tail end at a cell and head at a different cell whose number is greater than the cell at tail end. Similarly, the ladder has a foot and top at different cells and number at the top is higher than the number at foot. The tail end and head of snake and foot and top of ladder do not coincide, that is they are on different cells. Also there are multiple snakes and multiple ladders.

Now for the rules of the game. Players take turn to roll a dice. Depending upon the outcome, the player’s position is moved by as many numbers on the board. It is now next player’s turn to roll the dice and move to a new position. It may be possible that the player ends up at a new position that is head of a snake or foot of a ladder. If player’s new position is at the foot of the ladder, he gets to climb up the ladder to a new position that is top of the ladder. If the player’s new position is head of the snake, the player is moved to a new position that is at the tail-end of the snake. Obviously no action is taken when player ends up at either the tail-end of the snake or at the top of the ladder. These new positions are treated as any other position which has nothing to do with snake or ladder.

The player who reaches or exceeds 100 is declared as winner.

Write a program to simulate Snake and Ladder Game between 2 players.


Assumptions:

A player can start the game only by throwing 1.

Assume that there is only one snake and one ladder in the board.

Assume that the board size is 10*10.
Number of turns <=20.


Input and Output Format:

The 1st line of the input consists of 2 integers. The 1st integer corresponds to the square number where the foot of the ladder is and the 2nd integer corresponds to the square number where the head of the ladder is.

The 2nd line of the input consists of 2 integers. The 1st integer corresponds to the square number where the head of the snake is and the 2nd integer corresponds to the square number where the tail of the snake is.

The 3rd line of the input consists of an integer that corresponds to the number of turns, N.

The 4th line of the input consists of N space separated integers that correspond to the dice values rolled by the 1st player.

The 5th line of the input consists of N space separated integers that correspond to the dice values rolled by the 2nd player.

Output consists of 2 integers. The first integer corresponds to the position of the 1st player in the board after N turns and the second integer corresponds to the position of the 2nd player after N turns.

If the position of any of the players exceeds 100, display 100.


Sample Input:

10 40

50 20

5

1 4 5 6 2

6 1 5 5 6


Sample Output:

48

17   */



#include<stdio.h>
int main(){
	int laddertail,ladderhead,snaketail,
}