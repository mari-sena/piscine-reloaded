/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <mariafer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 14:08:40 by mariafer          #+#    #+#             */
/*   Updated: 2026/05/13 14:08:42 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	counter;

	counter = 0;
	while (*tab)
	{
		if (f(*tab++) == 1)
			counter++;
	}
	return (counter);
}

// int	ft_idk(char *str)
// {
// 	if (*str)
// 		return (1);
// 	else
// 		return (0);
// }
//
// #include <stdio.h>
// int	main(void)
// {
// 	int		result;
// 	char	*tab[] = {"abc", "", "42", "", 0};
//
// 	result = ft_count_if(tab, ft_idk);
// 	printf("%d", result);
// 	return (0);
// }
//
//	- quem retornou 1 apos rodar a funcao f
//	- conta quantos elementos retornaram 1 apos a funcao f
//
//	• Escreva uma função ft_count_if que retornará o número de elementos da
//	array que retornam 1, passados para a função f.
//	• A array será delimitada por 0
//		(significa que o array acada em "NULL" / "\0" / "0")