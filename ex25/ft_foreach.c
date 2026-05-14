/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <mariafer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 13:42:12 by mariafer          #+#    #+#             */
/*   Updated: 2026/05/13 13:42:14 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(*tab++);
		i++;
	}
}

// int	main(void)
// {
// 	int	tab[] = {1, 2, 3, 4};

// 	ft_foreach(tab, 4, &ft_putnbr);

// 	return (0);
// }