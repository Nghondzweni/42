#include "includes/libft.h"

size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
int	ft_strcmp(const char *s1, const char *s2);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strchr(const char *s, int c);



int	main(void){

	char str[] = "Hello";
	char str2[] = "He";
	char str3[] = "Always";
	char str4[] = "Here";
	char str5[] = "Richmond";
	char str6[] = "Coffee";
	char str7[] = "Tsundzukani";

	ft_putnbr(ft_strlen(str));
	ft_putchar('\n');
	ft_putstr(ft_strdup(str));
	ft_putchar('\n');
	ft_putstr(ft_strcpy(str2, str));
	ft_putchar('\n');
	ft_putstr(ft_strncpy(str2, str, 5));
	ft_putchar('\n');
	ft_putstr(ft_strcat(str3, str4));
	ft_putchar('\n');
	ft_putstr(ft_strncat(str5, str6, 0));
	ft_putchar('\n');
	ft_putnbr(ft_strcmp(str, str2));
	ft_putchar('\n');
	ft_putnbr(ft_strncmp(str, str2, 4));
	ft_putchar('\n');
	ft_putstr(ft_strchr(str7,'b'));
	ft_putchar('\n');
}
