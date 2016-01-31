/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str)
{
	if (str == NULL)
		return NULL;
	char *last = (char *)malloc(100);
	int i = 0, p = 0;
	for (; str[i] != '\0'; i++)
	{
		if (str[i - 1] == ' ' && str[i] != ' ')
			p = 0;
		if (str[i] != ' ')
		{
			last[p++] = str[i];
		}
	}
	last[p] = '\0';
	return last;
}
