#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char *cons = "BCDFGHJKLMNPQRSTVWXY";
	char *vowel = "AEIOU";
	char *input;
	srand(time(NULL));

	printf("Enter a pattern of consonants and vowels in lowercase, e.g. cvccvvc: ");
	scanf("%s", input);
	char *output = [strlen(input)];
	printf("\nEnter how many names to generate: ")
	scanf("%d", count);
	printf("\n")

	for (int i=0; i<count; i++)
	{
		for (int j=0; j<strlen(input); j++)
		{
			if (input[j] == 'c' || input[j] == 'C')
			{
				int r = rand() % 20;
				output[j] = cons[r];
			}
			else if (input[j] == 'v' || input[j] == 'V') 
			{
				int r = rand() % 5;
				output[j] = vowel[r];
			}
			else
			{
				printf("Invalid character");
				break;
			}
		}
		printf(output);
		printf("\n");
	}
	return 0;
}
