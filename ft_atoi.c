/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hphanixa <hphanixa@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 08:47:40 by hphanixa          #+#    #+#             */
/*   Updated: 2021/01/20 18:52:37 by hphanixa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		negatif;
	size_t	result;

	negatif = 1;
	result = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negatif = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - 48);
		str++;
	}
	if (negatif < 0 && result > 2147483648)
		return (0);
	if (negatif > 0 && result > 2147483647)
		return (-1);
	return (result * negatif);
}

long	ft_atol(const char *str)
{
	int		signe;
	long	number;

	while (ft_isspace(*str))
		str++;
	signe = 1;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signe *= -1;
		str++;
	}
	number = 0;
	while (*str >= '0' && *str <= '9')
	{
		number *= 10;
		number += *str - '0';
		str++;
	}
	return (number *= signe);
}

int	ft_satol(const char *str, long *nb)
{
	*nb = 0;
	if (ft_isnumber(str) == false)
		return (FAILURE);
	*nb = ft_atol(str);
	return (SUCCESS);
}

int	ft_satoi(const char *str, int *nb)
{
	long	long_nb;
	int		ret;

	ret = ft_satol(str, &long_nb);
	*nb = (int)long_nb;
	return (ret);
}
