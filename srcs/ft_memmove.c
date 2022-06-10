/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove].c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-paul <pde-paul@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 01:15:13 by pde-paul          #+#    #+#             */
/*   Updated: 2022/06/06 20:44:16 by pde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void * memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char *temp;
	
	i = 0;
	while (i < n)
	{
		src[i] = temp[i];
		i++;
	}
	temp[i] = '\0';
	i = 0;
	while (temp[i] != '\0')
	{
		dest[i] = temp[i];
		i++;
	}
	dest[i] = '\0';
	return (*dest);
}
