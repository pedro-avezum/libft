/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-paul <pde-paul@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 22:34:46 by pde-paul          #+#    #+#             */
/*   Updated: 2022/06/06 19:54:58 by pde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	i = 0;
	little_len = strlen(little);
	if (!little)
		return (big);
	while (big[i] && i + little_len <= len)
	{
		if(strcmp(&big[i], little, len) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
