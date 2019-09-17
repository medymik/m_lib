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
#endif
