/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyellowj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:48:13 by gyellowj          #+#    #+#             */
/*   Updated: 2019/09/06 16:44:18 by gyellowj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int res;

	res = 2;
	if (nb == 1 || nb == 0)
		return (nb);
	if (nb < 0)
		return (0);
	while (res <= nb / res)
	{
		if (nb == (res * res))
			return (res);
		res++;
	}
	return (0);
}
