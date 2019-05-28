#include <stdio.h>
#include <string.h>

int main()
{
char firstString[26];
for (int i = 0; i < 26; i++)
{
	firstString[i] = 97 + i;
}

char secondString[] = "abcdefghijklmnopqrstuvwxyz";

if (strcmp(firstString, secondString) == 0)
	printf("The strings are equal\n");
else
	printf("no");

for (int i = 0; i < 26; i++)
  {
    secondString[i] = secondString[i] - 32;
  }
  if (strcmp(firstString, secondString) != 0)
     printf("Changed\n");
  else
     printf("Not changed\n");
  
  char thirdString[52];
  strcpy(thirdString, firstString);
  strcat(thirdString, secondString);
  printf("Lowercase string: %s\n", firstString);
  printf("Uppercase string: %s\n", secondString);
  printf("Combined: %s\n", thirdString);
}

