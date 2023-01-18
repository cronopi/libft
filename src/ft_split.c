/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:23:30 by rcastano          #+#    #+#             */
/*   Updated: 2023/01/18 14:45:23 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static int	number_of_splits(char const *s, char c)
{
	int	i;
	int	strings;

	strings = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
			strings++;
		}
		else
			i++;
	}
	if (s[i] == '\0' && s[i - 1] != c)
		strings++;
	return (strings);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		strings;
	int		i;
	int		index_strings;
	int		l;
	int		letra;

	if (!s)
		return (NULL);
	strings = number_of_splits(s, c);
	//printf("el numero de strings es %i\n", strings);
		str = malloc(sizeof(char *) * strings);
	if (!str)
		return (0);
	i = 0;
	index_strings = 0;
	while (index_strings < strings)
	{
		l = 0;
		letra = 0;
		//printf("la i es %i\n", i);
		while (s[i] == c)
			i++;
		while (s[i + letra] != '\0' && s[i + letra] != c)
		{
			letra++;
		}
		//printf("leeetra %i\n", letra);
		if (letra > 0)
			str[index_strings] = malloc(sizeof(char *) * letra);
		while (l < letra)
		{
			str[index_strings][l] = s[i];
			l++;
			i++;
		}
		str[index_strings][l] = '\0';
		index_strings++;
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char const s[] = "xxxsplitxxthisxxforxxmexx!xxx";
	char c = 'x';
	char **str = ft_split(s, c);
	int i;

	i = 0;
	while (i < number_of_splits(s, c))
	{
		printf("%s\n", str[i]);
		i++;
	}
	return (0);
} */