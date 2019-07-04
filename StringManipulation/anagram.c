/* read 2 strings (Constraints: A, B. A can be equal to be in size, Can be shorter,
 * parse throught the longest string.
 * check char by char with the 2nd string.
 * if found, move the char to end of string and -- (or start) to ignore it
 * do this till length of 2nd
*/

#include<stdio.h>
#include<string.h>
#define MAXSIZE 26
void getTwoStrings(char *,char*);
void anagramCheck(char *,char*);
int main()
{
	char stringA[100],stringB[100];
	getTwoStrings(stringA,stringB);
	anagramCheck(stringA,stringB);
}

void getTwoStrings(char *stringA, char* stringB)
{
	printf("Enter the two strings:\n");
	scanf("%s %s",stringA,stringB);
}

void anagramCheck(char * stringA, char *stringB)
{
	int letterCounter[MAXSIZE]={0};
	
	printf("The strings are %s , %s \n",stringA,stringB);
	for(int i=0;i<strlen(stringA);i++)
	{
		letterCounter[stringA[i]-'a']++;
		letterCounter[stringB[i]-'a']--;
	}
	// another for loop
	for(int i=0;i<MAXSIZE;i++)
	{
		if(letterCounter[i])
			{
				printf("Its is NOT an anagram\n");
				return;
			}
	}
	printf("It is an anagram\n");
}
	
