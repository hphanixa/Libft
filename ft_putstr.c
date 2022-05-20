/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hphanixa <hphanixa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:54:49 by hphanixa          #+#    #+#             */
/*   Updated: 2022/01/12 19:28:28 by hphanixa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ancien ft_putstr avant de l'optimiser
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
*/

/* Nouveau ft_putstr:
** ssize_t car l'appel systeme renvoie un ssize_t: le nbr d'octet s'il a reussit
** sinon -1, et met a jour errno.
** Elle reçoit un char qui est constant, mais aussi un pointeur constant,
** c'est pour cela qu'on ecrit le prototype comme cela
*/

ssize_t ft_putstr(const char * const str)
{
	return (write(STDOUT_FILENO, str, ft_strlen(str));
}
