/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprintable.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hphanixa <hphanixa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:55:11 by hphanixa          #+#    #+#             */
/*   Updated: 2022/01/11 15:55:16 by hphanixa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		isprintable(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		if (!ft_isprint(str[i]))
			return (0);
	return (1);
}
