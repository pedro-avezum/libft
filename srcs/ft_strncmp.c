/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-paul <pde-paul@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 21:12:11 by pde-paul          #+#    #+#             */
/*   Updated: 2022/06/03 21:26:21 by pde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((n > i) && (s1[i] || s2[i]))
	{
		if ((const unsigned char) s1[i] != (const unsigned char) s2[i])
			return ((const unsigned char) s1[i] - (const unsigned char) s2[i]);
		i++;
	}
	return (0);
}
