/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <mariafer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 13:23:38 by mariafer          #+#    #+#             */
/*   Updated: 2026/05/12 13:23:40 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (s1 && (s1 == s2))
		s1++;
	return (*s1 - *s2);
}

// #include <string.h>
// #include <stdio.h>
// int    main(void)
// {
//     printf("%d", strcmp("a", "c"));
//     printf("\n");
//     printf("%d", ft_strcmp("a", "d"));
//     return (0);
// }
