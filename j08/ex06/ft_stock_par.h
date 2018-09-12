/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 10:30:14 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/12 17:24:20 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_print_words_tables(char **tab);
void				ft_putnbr(int nb);
char				**ft_split_whitespaces(char *str);
struct s_stock_par	*ft_param_to_tab(int ac, char **av);
typedef	struct		s_stock_par
{
	int				size_params;
	char			*str;
	char			*copy;
	char			**tab;
}					t_stock_par;

#endif
