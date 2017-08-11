/*  The film Joker was released on 12th August, 2016 . Joker is a bold and hard hitting political satire that might not have compromised entertainment but stands high on cast, music and writing. After impressing audiences and critics alike, Tamil socio-political drama “Joker” has won over superstar Rajinikanth, who has termed it a brilliant film.
 

 
In the film ‘Joker’ Director Rajamurugan has scaled the peak of cinematic excellence by attempting to show light to the common man who stays blissfully in the darkness, used and abused by those in the power circles.
 
As it is a film that deals with lot of social issues, the cultural association of your college plans to screen this movie in your college audi this week end. They plan to give wide publicity to this screening and plan to put display boards near the canteen and the library.

 
Can you write a program to get the details of the screening and display it in the format given below?
 
Input and Output Format :
 
Refer Sample Input and Output for formatting specifications.
Assume that the maximum length of the input strings is 50.
Please note that movie rating is a character.
All float values are displayed correct to 2 decimal places.
 
[All text in bold corresponds to input and the rest corresponds to output]
 
Sample Input and Output :
Enter the name of the movie
Joker
Enter the name of the auditorium
Kalam Memorial Hall
Enter the duration of the movie
2.151
Enter the number of free tickets remaining
120
Enter the public rating for the movie
A
Weekend Screening !!!
Movie Name : Joker
Auditorium Name : Kalam Memorial Hall
Duration of the movie : 2.15 hours
No. of tickets remaining : 120
Movie Rating : A   */


#include<stdio.h>
#include<string.h>
int main(){
	char movie[50],hall[50],rating[3];
	int ticket;
	float duration;

	printf("Enter the name of the movie\n");
	gets(movie);
	printf("Enter the name of the auditorium\n");
	gets(hall);
	printf("Enter the duration of the movie\n");
	scanf("%f",&duration);
	printf("Enter the number of free tickets remaining\n");
	scanf("%d",&ticket);
	printf("Enter the public rating for the movie\n");
	scanf("%s",rating);

	printf("Weekend Screening !!!\n");
	printf("Movie Name : %s\n",movie);
	printf("Auditorium Name : %s\n",hall);
	printf("Duration of the movie : %.2f hours\n",duration);
	printf("No. of tickets remaining : %d\n",ticket);
	printf("Movie Rating : %s",rating);

	return 0;
}