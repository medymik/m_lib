#include "../includes/m_lib.h"

char			*m_strncat(char *dest, char *src, unsigned int n)
{
	int		len;
	unsigned int	index;

	len = m_strlen(dest);
	index = 0;
	while (index < n)
	{
		dest[len] = src[index];
	       	len++;
		index++;
	}
	dest[len] = '\0';
	return (dest);
}
