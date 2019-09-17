#include <stdlib.h>

char			*m_strndup(char *src, unsigned int n)
{
	char		*dest;
	unsigned int	index;

	dest = (char*)malloc(sizeof(char) * n + 1);
	if(dest)
	{
		index = 0;
		while(index < n)
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (dest);
}
