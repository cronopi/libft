/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:33:46 by rcastano          #+#    #+#             */
/*   Updated: 2023/01/18 13:07:50 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*stack;
	char	*needle;

	i = 0;
	stack = (char *)big;
	needle = (char *)little;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len)
	{
		j = 0;
		while (i + j < len && needle[j] == stack[i + j])
		{
			printf("test\n");
			if (needle[j + 1] == '\0')
			{
				return (&stack[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char big[] = "";
	char little[] = "coucou";
	printf("%s", ft_strnstr(big, little, -1));
	return (0);
}
/*
j++

j = 7
str[j++] = 7 + 1 = 8 el checkeo de la posición lo hace antes del incremento
str[8]

++j

j = 7

str[++j] = j + 1  = 8 el checkeo de la posición lo hace despues del incremento
str[8]


si el incremento se encuentra en una línea "vacía" no afecta
el orden de la operación.

while(str[] ! null)
{
	str[] = str2[]
	i++;  or ++i;
}

si el incremento se encuentra en una línea que tiene varias
operaciones SI afecta el orden de la operacion

while(str[i++] ! null)   or   while(str[++i] ! null)
	str[] = str2[]					str[] = str2[]

*/
