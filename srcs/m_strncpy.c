char			*m_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}
	while(index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
