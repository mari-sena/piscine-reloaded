/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <mariafer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:14:13 by mariafer          #+#    #+#             */
/*   Updated: 2026/05/11 19:20:38 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char str);

void	ft_print_alphabet(void)
{
	int	aux;

	aux = 'a';
	while (aux <= 'z')
	{
		ft_putchar(aux);
		aux++;
	}
}
