#include "main.h"

int _atoi(char *s)
{
	char *tmp;
	unsigned int num;
	int sign;

	tmp = s;
	num = 0;
	sign = 1;

	while (*tmp != '\0' && (*tmp < '0' || *tmp > '9'))
	{
		if (*tmp == '-')
		{
			sign *= -1;
		}
		tmp++;
	}
	if (*tmp != '\0')
	{
		do
		{
				num = num * 10 + (*tmp - '0');
				tmp++;
		}while (*tmp >= '0' && *tmp <= '9');
	}
	return (num * sign);
}
