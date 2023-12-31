/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_overflow.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-ol <matde-ol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 13:54:56 by matde-ol          #+#    #+#             */
/*   Updated: 2023/12/31 13:55:37 by matde-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_overflow(char *src)
{
	long long int	sum;

	sum = ft_atol(src);
	if (sum > 2147483647 || sum < -2147483648)
		return (-1);
	return (0);
}
