/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:14:26 by plouda            #+#    #+#             */
/*   Updated: 2023/01/13 16:22:02 by plouda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	unsigned char	*ch;

	ch = s;
	i = 0;
	while (i < n)
	{
		*ch = '\0';
		ch++;
		i++;
	}
}
