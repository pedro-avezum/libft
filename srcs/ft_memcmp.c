/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp?.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-paul <pde-paul@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 22:21:00 by pde-paul          #+#    #+#             */
/*   Updated: 2022/06/06 19:56:32 by pde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i)
	{
		if ((const unsigned char *) s1[i] != (const unsigned char *) s2[i])
			return ((const unsigned char *) s1[i] - (const unsigned char *) s2[i]);
		i++;
	}
	return (0);
}
