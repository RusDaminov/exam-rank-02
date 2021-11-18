#include <unistd.h>

int check(char *s1, char c, int i)
{
	int n;

	n = -1;
	while (++n < i)
		if (s1[n] == c)
			return (0);
	return (1);
}

void ft_union(char *s1, char *s2)
{
	int i;
	int j;

	i = -1;
	j = -1;
	while (s1[++i]) {
		if (check(s1, s1[i], i))
			write(1, &s1[i], 1);
	}
	while (s2[++j]) {
		if (check(s1, s2[j], i) && check(s2, s2[j], j))
			write(1, &s2[j], 1);
	}
}

int	main()
{
	char *av1 = "zpadinton";
	char *av2 = "aqefpwtdjetyiytjneytjoeyjnejeyj";
	ft_union(av1, av2);
	write(1, "\n", 1);
	return (0);
}

//#include <unistd.h>
//
//int ft_strlen(char *s)
//{
//	int i = -1;
//	int len = 0;
//	while (s[++i])
//		len++;
//	return (len);
//}
//
//int main()
//{
//	int i = -1;
//	int k;
//
//	char *argv1 = "zpadinton";
//	char *argv2 = "aqefpwtdjetyiytjneytjoeyjnejeyj";
//
//		while (argv1[++i])
//		{
//			int j = -1;
//			while (++j < i)
//				if (argv1[i] == argv1[j])
//					break;
//			if (i == j)
//				write(1, &argv1[i], 1);
//		}
//		i = -1;
//		while (argv2[++i])
//		{
//			int j = -1;
//			while (argv1[++j])
//				if (argv2[i] == argv1[j])
//					break;
//			k = -1;
//			while (++k < i)
//				if (argv2[i] == argv2[k])
//					break;
//			if (j == ft_strlen(argv1) && (k == i))
//				write(1, &argv2[i], 1);
//		}
//	write(1, "\n", 1);
//	return (0);
//}