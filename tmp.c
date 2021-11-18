#include <stdlib.h>
#include <unistd.h>

int get_next_line(char **line)
{
	int i;
	char buff;

	i = 0;
	if (line == null)
		return (-1);
	line = malloc(sizeof(char) * 100);
	while (read(0, &buff, 0) > 0)
	{
		if (buff == '\n')
		{
			(*line)[i] = '\0';
			return (1);
		}
		(*line)[i] = buff;
		i++;
	}
}