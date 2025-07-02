/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnofal <mnofal@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 07:14:04 by mnofal            #+#    #+#             */
/*   Updated: 2025/07/01 07:20:18 by mnofal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	base_len;
	int	j;

	i = 0;
	sign = 1;
	result = 0;
	base_len = 0;
	while (base[base_len])
		base_len++;
	if (base_len < 2)
		return (0);
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i])
	{
		j = 0;
		while (j < base_len && base[j] != str[i])
			j++;
		if (j == base_len)
			break ;
		result = result * base_len + j;
		i++;
	}
	return (result * sign);
}
