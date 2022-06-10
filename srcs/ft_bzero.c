/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-paul <pde-paul@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 00:38:04 by pde-paul          #+#    #+#             */
/*   Updated: 2022/06/06 19:38:58 by pde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void bzero(void *s, size_t n)
{
	int	i;
	char	*c;
	
	i = 0;
	c = (char *) s;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
	return ();
}
