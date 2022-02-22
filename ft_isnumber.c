/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hphanixa <hphanixa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:46:27 by hphanixa          #+#    #+#             */
/*   Updated: 2022/02/22 14:02:18 by hphanixa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_isnumber(const char *str)
{
	size_t	i;

	i = 0;
	if (*str == '-')
		str++;
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]) == 0)
			return (false);
		i++;
	}
	return (i != 0);
}