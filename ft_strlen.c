/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hphanixa <hphanixa@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 10:42:22 by hphanixa          #+#    #+#             */
/*   Updated: 2022/01/12 18:55:00 by hphanixa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* La valeur retour est un size_t car len sera toujours positif.
** <len> correspond à la longueur cherchée, et i correspond généralement à un index.
** <len++> le compilateur stock la valeur temporaire de len avant d'incrementer.
** <++len> la valeur est incrémentée et non stockée, ce qui est plus optimal.
*/

size_t	ft_strlen(const char * const str)
{
	size_t len;

	len = 0;
	while (str[len] != '\0')
		++len;
	return (len);
}
