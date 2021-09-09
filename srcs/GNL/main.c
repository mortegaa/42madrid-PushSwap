
#include <fcntl.h>
#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	char	*line;
	int	fd;

	fd = open("prueba.txt", O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		printf("|%s|", line);
		free(line);
	}
	free(line);
	return (0);
}
