/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <dmoureu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 11:31:16 by dmoureu-          #+#    #+#             */
/*   Updated: 2017/11/18 06:10:43 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t pos;
	size_t lensrc;

	lensrc = ft_strlen(src);
	//printf("len:%zu", lensrc);
	pos = 0;
	ft_bzero(dest, n);
	if (lensrc > n)
		lensrc = n;
	ft_strnvcpy(dest, src, lensrc);
	return (dest);
}
