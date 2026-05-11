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
	int	aux;
	int	result;

	aux = nb;
	result = 1;
	while (aux > 0)
	{
		result *= aux;
		aux--;
	}
	return (result);
}
