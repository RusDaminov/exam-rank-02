/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:52:39 by abernita          #+#    #+#             */
/*   Updated: 2021/10/29 17:52:42 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Write a program that takes two strings and displays, without doubles, the
//characters that appear in either one of the strings.
//The display will be in the order characters appear in the command line, and
//will be followed by a \n.
//If the number of arguments is not 2, the program displays \n.

#include <unistd.h>

int ft_check(char c, char *str, int k)
{
	int i;

	i = -1;
	while (++i < k)
		if (str[i] == c)
			return(0);
	return(1);
}

void ft_union(char *str1, char *str2)
{
	int i;
	int j;

	i = -1;
	j = -1;
	while (str1[++i])
		if (ft_check(str1[i], str1, i))
			write(1, &str1[i], 1);
	while (str2[++j])
		if (ft_check(str2[j], str1, i) && ft_check(str2[j], str2, j))
			write(1, &str2[j], 1);
}

int main(int argc, char **argv) {
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
