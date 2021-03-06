/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafonso <flafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 18:58:05 by flafonso          #+#    #+#             */
/*   Updated: 2019/02/22 18:27:34 by flafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	int		i;

	i = 0;
	if (s)
		while (s[i])
		{
			if (s[i] == -12)
				ft_putchar('\0');
			else
				ft_putchar(s[i]);
			i++;
		}
}
