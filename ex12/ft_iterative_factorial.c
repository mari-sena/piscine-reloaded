/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <mariafer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:48:28 by mariafer          #+#    #+#             */
/*   Updated: 2026/05/11 20:44:54 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("Result is %d - Expected 0\n", ft_iterative_factorial(-2));
// 	printf("Result is %d - Expected 1\n", ft_iterative_factorial(0));
// 	printf("Result is %d - Expected 1\n", ft_iterative_factorial(1));
// 	printf("Result is %d - Expected 40320\n", ft_iterative_factorial(8));
// 	return (0);
// }