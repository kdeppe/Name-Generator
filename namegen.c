#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char *cons = "BCDFGHJKLMNPQRSTVWXY";
	char *vowel = "AEIOU";
	char *input;
	char *output = "";
	srand(time(NULL));

	printf("Enter a pattern of consonants and vowels in lowercase, e.g. cvccvvc");
	scanf("%s", input);

	while (input++)
	{
		if (input[0] == 'c')
		{
			int r = rand() % 20;
		}
		else if (input[0] == 'v') 
		{
			int r = rand() % 5;
		}

	}
	
	return 0;
}
