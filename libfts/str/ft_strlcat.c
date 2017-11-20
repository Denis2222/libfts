/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <dmoureu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 11:30:41 by dmoureu-          #+#    #+#             */
/*   Updated: 2017/11/18 08:01:22 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	n;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	n = d + s;
//	printf("[ Ask %zu # %zu +  %zu = %zu ] ", size, d, s, n);


	if (size >= d)
		dest = ft_strncat(dest, src, (size - d - 1));
	else
		return (size + s);
	if (size >= (d + s))
		return (d + s);
	else if (d == 0)
		return (s);
	else
		return (d + s);
}
