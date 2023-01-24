/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:47:06 by rcastano          #+#    #+#             */
/*   Updated: 2023/01/23 16:26:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int argument)
{
	if ((argument < 'a' || argument > 'z' )
		&& (argument < 'A' || argument > 'Z')
		&& (argument < '0' || argument > '9'))
		return (0);
	return (1);
}
