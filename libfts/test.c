#include <libft.h>
#include <stdio.h>
#include <time.h>


#define		STRING_1	"the cake is a lie !\0I'm hidden lol\r\n"
#define		STRING_4	"phrase differente pour le test"
#define		STRING_2	"there is no stars in the sky"
#define		STRING_3	"test basic !"


#define KILOBYTE	(1024llu)
#define MEGABYTE	(KILOBYTE * KILOBYTE)
#define GIGABYTE	(KILOBYTE * KILOBYTE * KILOBYTE)
void	print_memory(char *str, int len)
{
	int i =0;
	printf("START:\n");

	while (i<len)
	{
		printf("%c ",  (char)str[i]);
		i++;
	}
	printf("\n");
}

int	main(int ac, char ** argv)
{
	int startTime = (float)clock()/CLOCKS_PER_SEC * 1000;
	int endTime;
	int timeElapsed;

			char			*src = "/|\x12\xff\x09\x42\042\42|\\";
			int				size = 2;

			if (memchr(src, '\x42', size) == ft_memchr(src, '\x42', size))
				exit(TEST_SUCCESS);

	endTime = (float)clock()/CLOCKS_PER_SEC * 1000;
	timeElapsed = endTime - startTime;
	printf("time:%d s / 1000", timeElapsed);
	return (0);
}
