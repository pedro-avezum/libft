/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr].c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-paul <pde-paul@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 21:15:50 by pde-paul          #+#    #+#             */
/*   Updated: 2022/06/06 20:40:13 by pde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 void *memchr(const void *s, int c, size_t n)
 {
	size_t i;

	i = 0;
	if (n > 0) 
	{
		while (i < n && (unsigned char *)s[i] != (unsigned char)c)
			i++;
	}
	if (s[i] == c)
		return (*s);
	else
		return (NULL);
 }
 