/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:06:04 by matde-ol          #+#    #+#             */
/*   Updated: 2023/10/31 14:37:06 by matde-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc((ft_strlen(str1) + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (str1[i] != '\0')
	{
		dest[i] = str1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
