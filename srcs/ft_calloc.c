/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc].c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-paul <pde-paul@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 19:44:49 by pde-paul          #+#    #+#             */
/*   Updated: 2022/06/08 18:16:02 by pde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *calloc(size_t nmemb, size_t size)
{
	char *arr;
	
	arr =  malloc(nmemb * size);
	if (nmemb = 0 || size = 0)
		return (NULL);
	arr = memset(arr, 0, nmemb * size);
	return (s);
}
