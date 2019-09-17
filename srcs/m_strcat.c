#include "../includes/m_lib.h"

char	*m_strcat(char *dest, char *src)
{
	int len;
	int index;

	len = m_strlen(dest);
	index = 0;
	while (src[index] != '\0')
	{
		dest[len] = src[index];
	       	len++;
		index++;
	}
	dest[len] = '\0';
	return (dest);
}
