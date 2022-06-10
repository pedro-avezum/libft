/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-paul <pde-paul@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 23:37:52 by pde-paul          #+#    #+#             */
/*   Updated: 2022/06/06 19:54:32 by pde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int toupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c);
	else if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
		return (c);
	}
	else
		return (0);
}
