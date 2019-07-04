#include<stdio.h>
#include<string.h>

char * getInput(char *, int);
void checkPalindrome(const char *,int);
void checkIfPalindrome(const char *,int);
void reverseString(char *,int);
int main()
{
	char inputString[100];
	getInput(inputString,sizeof inputString);
	//checkIfPalindrome(inputString, strlen(inputString));
	checkPalindrome(inputString, strlen(inputString));
}

char * getInput(char *input,int maxSize)
{
	printf("Enter a string: \n");
	fgets(input, maxSize, stdin);
	char *find;
	find=strchr(input,'\n');
	if(find)
		{
			*find='\0';
		}
}

void checkIfPalindrome(const char * revString,int maxSize)
{
	char temp;
 	if(maxSize<=0)
		{
			printf("Enter string length greater than 1");
			return;	
		}
	for(int i=0,j=(maxSize-1); j>i; i++,j--)
	{
		if(revString[i]==revString[j])
		{
			
		}
		else
		{
			printf("Not a palindrome! \n");
			return;
		}	
	}
	printf("%s is a Palindrome\n",revString);
}
void checkPalindrome(const char * inputString,int maxSize)
{
	char checkString[maxSize];
	printf("The entered string is %s \n",inputString);
	//checkString=strrev(inputString);
	strcpy(checkString,inputString);
	reverseString(checkString,maxSize);
	if((strcmp(checkString,inputString)==0))
	{
		printf("String are equal!!");
	}
	else
	{
		printf("String are not equal!!, the strcpy value = %d",strcmp(checkString,inputString));
	}
}
void reverseString(char * revString,int maxSize)
{
	char temp;
	printf("Trying out my funcky Xor string reverse:\n");	
	for(int i=0,j=(maxSize-1); j>i; i++,j--)
	{
		/*temp=revString[i];
		revString[i]=revString[j];
		revString[j]=temp; */
		// This is the normal way. A better way is this:

		revString[i]=revString[i]^revString[j];
		revString[j]=revString[j]^revString[i];
		revString[i]=revString[i]^revString[j];
	}
	printf("String is now: %s /n",revString);
}


