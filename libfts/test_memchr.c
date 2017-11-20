#include <libft.h>
#include <stdio.h>
#include <time.h>

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

	char			*src = "/|adawdawd2awfawfawf\xff\x09\x42\042\42|\\2";
	int				size = 14;

//	if (memchr(src, '\x42', size) == ft_memchr(src, '\x42', size))
		printf("start:\n%p =*> \n%p\n%p\n", src, memchr(src, '2', size) ,ft_memchr(src, '2', size));
	return (0);
}

