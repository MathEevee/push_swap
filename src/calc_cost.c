/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_cost.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-ol <matde-ol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:57:53 by matde-ol          #+#    #+#             */
/*   Updated: 2023/12/26 13:47:10 by matde-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	calc_cost(t_stack *p, int idx)
{
	int	cost;

	if (idx < p->size / 2)
		cost = idx + 1;
	else
		cost = p->size - 1 - idx;
	return (cost);
}
