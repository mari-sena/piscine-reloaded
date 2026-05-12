/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <mariafer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 13:30:11 by mariafer          #+#    #+#             */
/*   Updated: 2026/05/12 13:30:13 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char str);

int	main(int argc, char *argv[])
{
	while (argc > 1)
	{
		ft_putchar(*argv[argc - 1]);
		ft_putchar('\n');
		argc--;
	}
	return (0);
}
