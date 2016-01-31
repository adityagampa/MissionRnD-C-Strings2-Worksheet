/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
#include<string.h>
int count_word_in_str_way_1(char *str, char *word)
{
	int i = 0, j = 0, p = 0, count = 0;
	for (; str[i] != '\0'; i++, j++)
	{
		if (str[i] == word[j])
		{
			p++;
			if (word[j + 1] == '\0')
			{
				if (p == strlen(word))
					count++;
				j = -1;
				p = 0;
			}
		}
		else
		{
			j = -1;
			p = 0;
		}
	}
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

