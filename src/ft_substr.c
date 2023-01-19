/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:38:32 by rcastano          #+#    #+#             */
/*   Updated: 2023/01/19 11:11:13 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*d;
	size_t			j;

	j = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	d = malloc(sizeof(char) * (len + 1));
	if (d == 0)
		return (NULL);
	while (j < len && s[start] != '\0')
	{
		d[j] = s[start];
		start++;
		j++;
	}
	d[j] = '\0';
	return (d);
}

/* int	main(void)
{
	char const s[] = "tripouille";
	unsigned int start;
	size_t len;
	char *str;

	start = 0;
	len = 42000;
	str = ft_substr(s, start, len);
	printf("%s", str);
	free(str);
	return (0);
} */
