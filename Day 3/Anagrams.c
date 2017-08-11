/* Write a program to find whether the 2 given strings are anagrams or not.
Anagrams are words or phrases made by mixing up the letters of other words or phrases,
 
Input and Output Format:
Input consists of 2 string. Assume that all characters in the string are lowercase letters or spaces and the maximum length of the string is 100.
Refer sample input and output for formatting specifications.
All text in bold corresponds to input and the rest corresponds to output.
 
Sample Input and Output 1:
Enter the first string
anitha
Enter the second string
amphisoft
anitha and amphisoft are not anagrams
 
Sample Input and Output 2:
Enter the first string
the eyes
Enter the second string
they see
the eyes and they see are anagrams  */

#include<stdio.h>
int anagram(char[],char[]);
int main(){
	char a[100],b[100];
	int flag;
	printf("Enter the first string\n");
	gets(a);
	printf("Enter the second string\n");
	gets(b);
	flag=anagram(a,b);
	if(flag=1)
		printf("%s and %s are anagrams\n",a,b);
	else
		printf("%s and %s are not anagrams\n",a,b);
	return 0;
}
int anagram(char a[],char b[]){
	int f[26]={0},s[26]={0},c=0;
	while(a[c]!='\0'){
		f[a[c]-'a']++;
		c++;
	}
	c=0;
	while(b[c]!='\0'){
		s[b[c]!=s[c]]
		c++;
	}
	for(c=0;c<26;c++){
		if(f[c]!=s[c])
			return 0;
	}
	return 1;
}