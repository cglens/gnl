/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_absolut.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglens <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 17:48:15 by cglens            #+#    #+#             */
/*   Updated: 2015/12/17 18:33:02 by cglens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_absolut(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}