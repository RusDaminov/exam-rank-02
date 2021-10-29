/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:52:13 by abernita          #+#    #+#             */
/*   Updated: 2021/10/29 17:52:16 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Write a program that takes two strings and displays, without doubles, the
//characters that appear in both strings, in the order they appear in the first
//one.
//The display will be followed by a \n.
//If the number of arguments is not 2, the program displays \n.

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check(char *str, char c, int i)
{
	int	j;

	j = 0;
	while(j < i)
	{
		if (str[j] == c)
			return (0);
		++j;
	}
	return (1);
}

void	ft_inter(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		if (ft_check(s1, s1[i], i) == 1)
		{
			j = 0;
			while (s2[j])
			{
				if (s2[j] == s1[i])
				{
					write(1, &s1[i], 1);
					break;
				}
				++j;
			}
		}
		++i;
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
		ft_inter(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}

//#include <unistd.h>
//
//int ft_check(char c, char *str, int k)
//{
//	int i;
//
//	i = -1;
//	while (++i < k)
//		if (str[i] == c)
//			return(0);
//	return(1);
//}
//
//void ft_union(char *str1, char *str2)
//{
//	int i;
//	int j;
//	int opa;
//
//	i = -1;
//	j = -1;
//	opa = 0;
//	while (str2[opa])
//		opa++;
//	while (str1[++i])
//		if (ft_check(str1[i], str1, i) && !ft_check(str1[i], str2, opa))
//			write(1, &str1[i], 1);
//}
//
//int main(int argc, char **argv) {
//	if (argc == 3)
//		ft_union(argv[1], argv[2]);
//	write(1, "\n", 1);
//	return (0);
//}
