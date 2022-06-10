/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset].c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-paul <pde-paul@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 23:16:42 by pde-paul          #+#    #+#             */
/*   Updated: 2022/06/06 20:16:48 by pde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*sub;
	
	i = 0;
	sub = (unsigned char *)s;
	while (i < n)
	{
		sub[i] = c;
		i++;
	}
	return ((void *)s);
}
