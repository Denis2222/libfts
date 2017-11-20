/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <dmoureu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 11:30:35 by dmoureu-          #+#    #+#             */
/*   Updated: 2017/11/18 03:12:24 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*str;
	int		len;

	len = ft_strlen(src);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, src, len);
	str[len] = 0;
	return (str);
}

