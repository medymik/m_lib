#include "../includes/m_lib.h"

void	m_putnbr(int nbr)
{
	unsigned int n;

	if(nbr < 0)
	{
		m_putchar('-');
		n = -nbr;
	}
	else
		n = nbr;
	if(n < 10)
		m_putchar(n + '0');
	else
	{
		m_putnbr(n / 10);
		m_putnbr(n % 10);
	}
}
