/* The film Joker was released on 12th August, 2016 . Joker is a bold and hard hitting political satire that might not have compromised entertainment but stands high on cast, music and writing. After impressing audiences and critics alike, Tamil socio-political drama “Joker” has won over superstar Rajinikanth, who has termed it a brilliant film.
 

 
In the film ‘Joker’ Director Rajamurugan has scaled the peak of cinematic excellence by attempting to show light to the common man who stays blissfully in the darkness, used and abused by those in the power circles.
 
As it is a film that deals with lot of social issues, the cultural association of your college plans to screen this movie in your college audi this week end. They plan to give wide publicity to this screening and plan to put display boards near the canteen and the library.
 

 
Can you write a program to get the details of the movie and display it in the format given below?
 
Input and Output Format :
 
Refer Sample Input and Output for formatting specifications.
Assume that the maximum length of the input strings is 50.
 
[All text in bold corresponds to input and the rest corresponds to output]
 
Sample Input and Output :
Enter the name of the Movie
Joker
Enter the name of the Director
Raju Murugan
Enter the name of the Production Company
Dream Warrior Pictures
Enter the name of Music Director
Sean Roldan
Weekend Screening !!!
The film Joker produced by Dream Warrior Pictures and directed by Raju Murugan.
Music was composed by Sean Roldan.   */


#include<stdio.h>
#include<string.h>
int main(){
	char movie[50],director[50],producer[50],music[50];
	printf("Enter the name of the Movie\n");
	gets(movie);
	printf("Enter the name of the Director\n");
	gets(director);
	printf("Enter the name of the Production Company\n");
	gets(producer);
	printf("Enter the name of Music Director\n");
	gets(music);

	printf("Weekend Screening !!!\nThe film %s produced by %s and directed by%s.\n",movie,producer,director);
	printf("Music was composed by %s.",music);

	return 0;
}