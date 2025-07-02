/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnofal <mnofal@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 06:57:24 by mnofal            #+#    #+#             */
/*   Updated: 2025/07/01 06:58:27 by mnofal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int		base_len;
	char	c;

	n = nbr;
	base_len = 0;
	while (base[base_len])
		base_len++;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= base_len)
		ft_putnbr_base(n / base_len, base);
	c = base[n % base_len];
	write(1, &c, 1);
}
