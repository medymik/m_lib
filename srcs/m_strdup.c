#include <stdlib.h>
#include "../includes/m_lib.h"

char	*m_strdup(char *src)
{
	int len;
	char *dest;
	int index;

	len = m_strlen(src);	
	dest = (char*)malloc(sizeof(char) * len + 1);
	if(dest)
	{
		index = 0;
		while(index < len)
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (dest);
}
