/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-paul <pde-paul@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 22:02:04 by pde-paul          #+#    #+#             */
/*   Updated: 2022/06/06 18:53:09 by pde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int check)
{
	if (!(check >= '0' && check <= '9')
			||	(!((check >= 97 && check <= 122)
			|| (check >= 65 && check <= 90))))
		return (0);
	else
		return (1);
}
