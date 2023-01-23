/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:28:21 by rcastano          #+#    #+#             */
/*   Updated: 2023/01/23 01:15:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;

	j = 0;
	i = ft_strlen(dst);
	k = ft_strlen(src);
	l = i;
	if (size <= l)
		return (k + size);
	else
		l = l + k;
	while (src[j] != '\0' && i + 1 < size)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (l);
}

/* size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	slen = ft_strlen(src);
	if (!dst && !size)
		return (slen);
	i = 0;
	dlen = ft_strlen(dst);
	if (size <= dlen)
		return (slen + size);
	else
	{
		while (i + dlen < size - 1 && i < dlen + slen && src[i])
		{
			dst[dlen + i] = src[i];
			i++;
		}
		dst[dlen + i] = 0;
	}
	return (dlen + slen);
} */

/* int	main(void)
{
	char src[] = "lorem ipsum dolor sit amet";
	char dst[10] = "a";
	printf("%li\n", ft_strlcat(dst, src, 0));
	//printf("%li\n", strlcat(dst, src, 11));
	return (0);
} */
