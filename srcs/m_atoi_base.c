#include "../includes/m_lib.h"

int	m_check_and_convert(char c, int base)
{
	int value;

	value = -1;
	if (c >= 'A' && c <= 'Z')
		value = c - 65 + 10;
	else if (c >= 'a' && c <= 'z')
		value = c - 97 + 10;
	else if(c >= '0' && c <= '9')
		value = c - 48;

	if(value >= base)
		value = -1;
	return (value);
}

int	m_atoi_base(char *str, int base)
{
	int sign;
	int value;
	int index;

	index = 0;
	value = 0;
	sign = 1;
	while (str[index] <= 32 && str[index] != '\0')
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if(str[index] == '-')
			sign = -1;
		index++;
	}
	while (str[index] != '\0' &&
			m_check_and_convert(str[index], base) != -1)
	{
		value = value * base + m_check_and_convert(str[index], base);
		index++;
	}
	return (value * sign);
}
