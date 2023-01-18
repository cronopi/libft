/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:09:28 by rcastano          #+#    #+#             */
/*   Updated: 2023/01/18 14:45:39 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

char	**ft_string_lengh(int strings, char *s, char c, char **str)
{
	int		index_strings;
	int		i;
	int		letra;
	int		l;

	index_strings = 0;
	i = 0;
	letra = 0;
	l = 0;
	while (index_strings < strings)
	{
		l = 0;
		letra = 0;
		while (s[i] == c)
			i++;
		while (s[i + letra] != '\0' && s[i + letra] != c)
			letra++;
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
	char	*s_cast;

	s_cast = (char *)s;
	strings = number_of_splits(s, c);
	str = malloc(sizeof(char *) * strings);
	if (!str)
		return (0);
	ft_string_lengh(strings, s_cast, c, str);
/* 	while (index_strings < strings)
	{
		l = 0;
		letra = 0;
		printf("la i es %i\n", i);
		while (s[i] == c)
			i++;
		while (s[i + letra] != '\0' && s[i + letra] != c)
			letra++;
		printf("leeetra %i\n", letra);
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
	} */
	return (str);
}

int	main(void)
{
	char const	s[] = "xxsplitxxxthisxxxforxmexxxxx!xx";
	char		c = 'x';
	char		**str = ft_split(s, c);
	int			i;

	i = 0;
	while (i < number_of_splits(s, c))
	{
		printf("%s\n", str[i]);
		i++;
	}
	return (0);
}

/*
	if (!*s)
	{
		str = malloc (1 * sizeof(char *));
		*str = NULL;
		return (str);
	}

 	if (!str_lengh(s))
		return ([s]);// [[""]]
	strings = number_of_splits(s, c);
	printf("el numero de strings es %i\n", strings);
 	if (s[0] == '')
			str = malloc(sizeof(char *) * 1);
	else */