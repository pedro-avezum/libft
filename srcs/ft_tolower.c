/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-paul <pde-paul@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 23:37:47 by pde-paul          #+#    #+#             */
/*   Updated: 2022/06/03 20:36:17 by pde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
		return (c);
	}
	else if (c >= 'a' && c <= 'z')
		return (c);
	else
		return (0);
}