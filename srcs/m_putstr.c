#include "../includes/m_lib.h"

void	m_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		m_putchar(str[index]);
		index++;
	}
}
