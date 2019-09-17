int	m_atoi(char *str)
{
	int index;
	int sign;
	int value;

	index = 0;
	sign = 1;
	value = 0;
	while (str[index] <= 32 && str[index] != '\0')
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if(str[index] == '-')
			sign = -1;
		index++;
	}
	while (str[index] >= 48 && str[index] <= 57 && str[index] != '\0')
	{
		value = value * 10 + str[index] - 48;
		index++;
	}
	return (value * sign);
}
