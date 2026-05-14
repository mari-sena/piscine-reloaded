/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <mariafer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 20:48:25 by mariafer          #+#    #+#             */
/*   Updated: 2026/05/11 20:52:37 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	aux;
	int	mult;

	aux = 1;
	mult = aux * aux;
	while ((mult != nb) && (mult < nb))
	{
		aux++;
		mult = aux * aux;
		if (mult == nb)
			return (aux);
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_sqrt(64));
// 	return (0);
// }