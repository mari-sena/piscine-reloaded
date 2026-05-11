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

void	ft_putchar(char str);

void	ft_print_numbers(void)
{
	int	aux;

	aux = 33;
	while (aux < 127)
	{
		ft_putchar(aux);
		aux++;
	}
}
