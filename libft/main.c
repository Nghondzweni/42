#include "includes/libft.h"


int	main(void){

	/*char str[] = "HHHHH";
	char str2[] = "hhhhh";
	char str3[] = "Always";
	char str4[] = "Here";
	char str5[] = "Richmond";
	char str6[] = "Coffee";
	const char str7[] = "Tsundzukani";*/
	const char haystack[] = "Hello, my name is Tsundzukani.";
	const char needle[] = "b"; 

	/*ft_putnbr(ft_strlen(str));
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
	ft_putnbr(ft_strncmp(str, str2, 100));
	ft_putchar('\n');
	ft_putstr(ft_strchr(str7,'k'));
	ft_putchar('\n');*/
	ft_putstr(ft_strstr(haystack, needle));
}
