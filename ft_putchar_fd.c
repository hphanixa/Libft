/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hphanixa <hphanixa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 15:41:52 by hphanixa          #+#    #+#             */
/*   Updated: 2021/01/07 11:48:39 by hphanixa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Si l'appel systeme write reussit, il renvoie le nbr d'octet lu
** sinon, elle renvoie -1 et met a jour errno.
** En faisant <return (write...)>, cela nous permet de recuperer la valeur retour de write
** qui est un ssize_t (d'où le prototype de la fonction).
** Les variables reçues sont constantes car elles ne sont pas amenées a etre modifié.
*/

ssize_t	ft_putchar_fd(const char c, const int fd)
{
	return (write(fd, &c, sizeof(c));
}
