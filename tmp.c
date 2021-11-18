#include <unistd.h>

int check(char *s1, char c, int i)
{
	int n;

	n = -1;
	while (++n < i)
		if (s1[i] == c)
			return (0);
	return (1);
}

void ft_union(char *s1, char *s2)
{
	int i;
	int j;

	i = -1;
	j = -1;
	while (s1[++i])
		if (check(s1, s1[i], i))
			write (1, &s1[i], 1);
	while (s2[++j])
		if (check(s1, s2[j], i) && check(s2, s2[j], j))
			write(1, &s2[j], 1);
}

int        main()
{
	char *av1 = "zpadinton";
	char *av2 = "paqefwtdjetyiytjneytjoeyjnejeyj";
	ft_union(av1, av2);
	write(1, "\n", 1);
	return (0);
}