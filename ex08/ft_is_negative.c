/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <mariafer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:28:15 by mariafer          #+#    #+#             */
/*   Updated: 2026/05/11 19:30:46 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char str);

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar("N");
	else
		ft_putchar("P");
}
