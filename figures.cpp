#include "figures.hpp"

Figures::Figures() {}

Figures::~Figures() {}

void	Figures::print_pyramid(const int	size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = size - i - 1; j > 0; j--)
			printf(" ");
		for (int j = 0; j < (i + 1); j++)
			printf("* ");
		printf("\n");
	}
}

void 	Figures::print_pyramid_int_pattern(const int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%*d", 0, size);
	}
}