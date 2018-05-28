#include "libft.h"


int	main(void){

	//char str[] = "HHHHHHH";
	//char str2[] = "hhhhh";
	/*char str3[] = "Here";
	char str4[] = "Here";
	char str5[] = "Richmond";
	char str6[] = "Coffee";
	const char str7[] = "Tsundzukani";*/
	//const char haystack[] = "Hello my name is";
	/*const char needle[] = "name";
	const char haystack2[] = "Hello my name is Tsundzu";
	const char needle2[] = "name";
	const char strrchr[] = "Hello, my name is Tsundzu";*/
	//char	strlcat[] = "Tsundzukani";
	//char	strlcat2[] = "Hello";
	const char	str[] = "**Hello*my*name***is**Tsundzukani*";




	//ft_putnbr(ft_strlen(str));
	//ft_putchar('\n');
	//ft_putstr(ft_strdup(str));
	/*ft_putchar('\n');
	ft_putstr(ft_strcpy(str2, str));
	ft_putchar('\n');
	ft_putstr(ft_strncpy(str2, str, 5));
	ft_putchar('\n');
	ft_putstr(ft_strcat(str3, str4));
	ft_putchar('\n');
	ft_putstr(ft_strncat(str5, str6, 0));
	ft_putchar('\n');
	ft_putnbr(strcmp(str, str2));
	ft_putchar('\n');
	ft_putnbr(ft_strncmp(str, str2, 100));
	ft_putchar('\n');
	ft_putstr(ft_strchr(str7,'d'));
	ft_putchar('\n');
	//ft_putstr(ft_strstr(haystack, needle));
	//ft_putstr(ft_strnstr(haystack2, needle2, 50));
	//ft_putstr(ft_strrchr(strrchr, 'b'));
	//ft_putstr(ft_memset(str, 'A', 2));*/
	//ft_putnbr(ft_strlcat(strlcat2, strlcat, 7));i
	ft_putnbr(ft_getwords(str,42));
}

