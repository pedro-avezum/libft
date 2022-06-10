/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-paul <pde-paul@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 22:33:16 by pde-paul          #+#    #+#             */
/*   Updated: 2022/06/06 18:53:03 by pde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int check)
{
	if ((check >= 0 && check <= 127))
		return (1);
	else
		return (0);
}
