/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chonorat <chonorat@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:40:31 by chonorat          #+#    #+#             */
/*   Updated: 2022/12/05 15:40:33 by chonorat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			index;
	unsigned char	*unsigned_s;

	if (n == 0)
		return ;
	unsigned_s = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		unsigned_s[index] = '\0';
		index++;
	}
}
