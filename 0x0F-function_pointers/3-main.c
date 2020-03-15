#include "3-calc.h"

/**
* main - Print the name
* @argc : The name
* @argv : the pointer
* Description: hace cosas muy buenas
* Return: 0
*/

int main(int argc, char *argv[])
{
	int one, two, ans;
	int (*mulc)(int, int);
	char *l;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	one = atoi(argv[1]);
	two = atoi(argv[3]);
	l = argv[2];

	if (argv[2] == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*l == '/' || *l == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	mulc = get_op_func(l);
	ans = mulc(one, two);

	printf("%d\n", ans);
	return (0);
}
