#include <stdio.h>
#include "figures.hpp"

#define SIZE 4

int		main(void)
{
	Figures figures_output;

	figures_output.print_pyramid(SIZE);

	return (0);
}