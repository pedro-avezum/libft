/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-paul <pde-paul@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 00:55:41 by pde-paul          #+#    #+#             */
/*   Updated: 2022/06/01 01:13:53 by pde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void * memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && n > i)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (*dest);
}