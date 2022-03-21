/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hphanixa <hphanixa@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 09:04:33 by hphanixa          #+#    #+#             */
/*   Updated: 2022/01/12 19:41:35 by hphanixa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** fonction servant a allouer la memoire puis initialiser a 0
** cela evite les garbage data et 
** evite de devoir rajouter une ligne pour initialiser a 0
*/

void	*ft_calloc(size_t count, size_t size)
{
	char	*result;

	result = malloc(size * count);
		if (!result)
		return (NULL);
	ft_memset(result, 0, count * size);
	return (result);
}
