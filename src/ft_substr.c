/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:38:32 by rcastano          #+#    #+#             */
/*   Updated: 2023/01/18 20:06:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*d;
	unsigned int	i;
	size_t			j;

	j = 0;
	i = 0;
	if (!s)
		return (NULL);
	while (i < start)
		i++;
	if (start >= strlen(s))
		len = 0;
	d = malloc((len + 1));
	if (d == 0)
		return (NULL);
	while (j < len && s[i] != '\0')
	{
		d[j] = s[i];
		i++;
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

	start = 4;
	len = 42000;
	str = ft_substr(s, start, len);
	printf("%s", str);
	free(str);
	return (0);
} */
