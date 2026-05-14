/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <mariafer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 20:45:15 by mariafer          #+#    #+#             */
/*   Updated: 2026/05/11 20:46:28 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("Result is %d - Expected 0\n", ft_recursive_factorial(-2));
// 	printf("Result is %d - Expected 1\n", ft_recursive_factorial(0));
// 	printf("Result is %d - Expected 1\n", ft_recursive_factorial(1));
// 	printf("Result is %d - Expected 40320\n", ft_recursive_factorial(8));
// 	return (0);
// }