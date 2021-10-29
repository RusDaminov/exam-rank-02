/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 11:11:04 by abernita          #+#    #+#             */
/*   Updated: 2021/08/09 11:11:09 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	camel_to_snake(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			write(1, "_", 1);
			*str = *str + ('a' - 'A');
		}
		write(1, str, 1);
		str++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		camel_to_snake(argv[1]);
	write(1, "\n", 1);
	return (0);
}