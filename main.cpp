#include <stdio.h>
#include "figures.hpp"

#define SIZE 5

int		main(void)
{
	Figures figures_output;

	figures_output.print_pyramid(SIZE);
	figures_output.print_pyramid_int_pattern(SIZE);

	return (0);
}