/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 10:30:14 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/12 16:48:06 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

char				**ft_split_whitespaces(char *str);
char				*ft_strdup(char *str);
int					ft_strlen(char *str);
struct s_stock_par	*ft_param_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_par *par);
typedef	struct		s_stock_par
{
	int				size_params;
	char			*str;
	char			*copy;
	char			**tab;
}					t_stock_par;

#endif
