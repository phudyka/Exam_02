#include "flood_fill.h"

void	fill(char **tab, int x, int y, char old_char, char new_char, t_point size)
{
	if (x < 0 || x >= size.x || y < 0 || y >= size.y || tab[y][x] != old_char)
		return ;
	tab[y][x] = new_char;
	fill(tab, x + 1, y, old_char, new_char, size);
	fill(tab, x - 1, y, old_char, new_char, size);
	fill(tab, x, y + 1, old_char, new_char, size);
	fill(tab, x, y - 1, old_char, new_char, size);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char	old_char;
	char	new_char;

	old_char = tab[begin.y][begin.x];
	new_char = 'F';
	fill(tab, begin.x, begin.y, old_char, new_char, size);
}
