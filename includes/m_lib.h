#ifndef M_LIB_H

# define M_LIB_H
int	m_strlen(char *str);
int	m_strcmp(char *str1, char *str2);
int	m_strncmp(char *str1, char *str2, unsigned int n);
char	*m_strdup(char *src);
char	*m_strndup(char *src, unsigned int n);
char	*m_strcat(char *dest, char *src);
char	*m_strncat(char *dest, char *src, unsigned int n);
void	m_putchar(char c);
void	m_putstr(char *str);
int	m_atoi(char *str);
void	m_putnbr(int nbr);
int	m_atoi_base(char *str, int base);
char	*m_strcpy(char *dest, char *strcpy);
char	*m_strncpy(char *dest, char *src, unsigned int n);
char	*m_strstr(char *str, char *to_find);
#endif
