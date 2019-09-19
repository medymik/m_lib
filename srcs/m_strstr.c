#include "../includes/m_lib.h"

char	*m_strstr(char *str, char *to_find)
{
	int i;
	int j;

	if(m_strlen(to_find) == 0 && m_strlen(str) != 0)
		return (str);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while(str[i + j] == to_find[j] && str[i + j] != '\0' && to_find[j] != '\0')
			j++;
		if(to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
