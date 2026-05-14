/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <mariafer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:23:08 by mariafer          #+#    #+#             */
/*   Updated: 2026/05/11 19:27:27 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int n);

void	ft_print_numbers(void)
{
	int	aux;

	aux = '0';
	while (aux <= '9')
	{
		ft_putchar(aux);
		aux++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }