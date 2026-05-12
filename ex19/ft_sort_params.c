/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <mariafer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 13:51:07 by mariafer          #+#    #+#             */
/*   Updated: 2026/05/12 13:51:09 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (s1 && (s1 == s2))
		s1++;
	return (*s1 - *s2);
}

void	ft_sort_params(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*swap;

	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - i)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				swap = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = swap;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc > 1)
	{
		ft_sort_params(argc, argv);
		i = 1;
		while (i < argc)
		{
			ft_putchar(*argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
