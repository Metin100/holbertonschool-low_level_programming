#include <stdio.h>
#include "main.h"

int _isupper (int c)
{
	char k = "c + '0'";

	if (c >= 'A' && c <= 'Z')
	{
		return 1;
	}
	else if (c >= 'a' && c <= 'z')
	{
		return 0;
	}
}
