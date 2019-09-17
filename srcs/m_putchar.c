#include <unistd.h>

void	m_putchar(char c)
{
	write(1, &c, 1);
}
