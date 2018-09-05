/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   full_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 01:26:49 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/04 00:15:40 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>


unsigned int    ft_strlcat(char *dest, char *src, unsigned int size);
char    *ft_strncat(char *dest, char *src, int nb);
char    *ft_strcat(char *dest, char *src);
int     ft_str_is_printable(char *str);
int     ft_str_is_uppercase(char *str);
int     ft_str_is_lowercase(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_alpha(char *str);
char    *ft_strcapitalize(char *str);
char    *ft_strlowcase(char *str);
char	*ft_strupcase(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strcpy(char *dest, char *src);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	
	
	char src[3] = {'1', '2', '3'};
	char dest[7];
	
	dest[0] = 'a';
	dest[1] = 'b';
	dest[2] = 'c';
	dest[3] = 'd';
	
	char src2[3] = {'1', '2', '3'};
	char dest2[5];

	dest2[0] = 'a';
	dest2[1] = 'b';
	dest2[2] = 'c';
	dest2[3] = 'd';
	
//	printf("%d\n", ft_strlcat(dest, src, 2));
//	printf("%lu\n", strlcat(dest2, src2, 3));

//  printf("%s\n", ft_strncat(dest, src, 5));

//	printf("%s\n", ft_strcat(dest, src));
	
//	printf("%d\n", ft_str_is_printable(argv[1]));

//	printf("%d\n", ft_str_is_uppercase(argv[1]));
	
//	printf("%d\n", ft_str_is_lowercase(argv[1]));
	
//	printf("%d\n", ft_str_is_numeric(argv[1]));
	
//	printf("%d\n", ft_str_is_alpha(argv[1]));
	
//	printf("%s\n", ft_strcapitalize(argv[1]));

//	printf("%s\n", ft_strlowcase(argv[1]));
	
//	printf("%s\n", ft_strupcase(argv[1]));

//	printf("%d\n", ft_strncmp(argv[1], argv[2], 5));
//	printf("%d\n", strncmp(argv[1], argv[2], 5));

//	printf("%d\n", ft_strcmp(argv[1], argv[2]));
//	printf("%d\n", strcmp(argv[1], argv[2]));
	
	printf("%s\n", ft_strstr(argv[1], argv[2]));
	printf("%s\n", strstr(argv[1], argv[2]));
	
//	printf("%s\n", ft_strncpy(dest, src, 2));
//	printf("%s\n", strncpy("test", "toot", 3));

//	printf("%s\n", ft_strcpy(dest, src));
//	printf("%s\n", strcpy("test", "tofo"));
	
//	printf("%d\n", ft_atoi("   555"));
//	printf("%d\n", atoi("   555"));
	
//	ft_putnbr( 555);
	
//	ft_putstr("bonjour");

	return (0);
}
