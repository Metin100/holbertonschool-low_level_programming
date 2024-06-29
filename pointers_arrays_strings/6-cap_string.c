#include "main.h"

/**
*cap_string - capitalizes all words in a string
*@s: string to capitalize
*
*Return: address of s
*/

//first we are defining array which contains seperating symbols
//first loop checks is this symbol NULL or not
//then we have condition which is asking that is it lowercase or not
// if it is, then we are checking is it first symbol and then we make it upper
// else we have loop which is searching seperate symbols and if we found them:
// we will make symbol uppercas
// //first we are defining array which contains seperating symbols
// first loop checks is this symbol NULL or not
// then we have condition which is asking that is it lowercase or not
/// if it is, then we are checking is it first symbol and then we make it upper
//else we have loop which is searching seperate symbols and if we found them:
//we will make symbol uppercase

char *cap_string(char *s)
{
	int i = 0, j;
	char a[] = " \t\n,;.!?\"(){}";

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == s[i - 1])
					{
						s[i] -= 'a' - 'A';
						break;
					}
				}
			}
		}
		i++;
	}

	return (s);
}
