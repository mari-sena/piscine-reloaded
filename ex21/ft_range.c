/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <mariafer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 18:55:59 by mariafer          #+#    #+#             */
/*   Updated: 2026/05/12 18:56:01 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	gap;
	int	i;
	int	*arr;

	i = 0;
	gap = (max - min);
	arr = (int *)malloc(sizeof(int) * gap);
	if (min >= max)
		return (NULL);
	while (i < gap)
		arr[i++] = min++;
	return (arr);
}

// #include <stdio.h>
// int    main(void)
// {
//     int    *arr;
//     int    i;

//     i = 0;
//     arr = ft_range(-2, 10);
//     while (i < 3)
//     {
//         printf("%d", arr[i]);
//         printf("\n");
//         i++;
//     }
//     return (0);
// }