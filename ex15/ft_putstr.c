/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <mariafer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 13:13:09 by mariafer          #+#    #+#             */
/*   Updated: 2026/05/12 13:13:11 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int n);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	ft_putstr("asdfasa");
// 	return (0);
// }