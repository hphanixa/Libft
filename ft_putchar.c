/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hphanixa <hphanixa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:54:15 by hphanixa          #+#    #+#             */
/*   Updated: 2022/01/12 19:42:20 by hphanixa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* la fonction renvoie un ssize_t car l'appel a ft_putchar_fd renvoie un ssize_t).
** On recoit un const char car cette variable n'est pas amenée a etre modifiée.
/*

ssize_t	ft_putchar(const char c) 
{
	return (ft_putchar_fd(c, STDOUT_FILENO));
}
