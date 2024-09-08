#include "so_long.h"

static void	init_player_position(t_mlx	**game)
{
	(*game)->p_pos = malloc(sizeof(t_player_pos));
	if (!(*game)->p_pos)
		exit_error(game, "Player position couldn't get allocated!");
}

void get_player_pos(t_mlx **game)
{
	int line;
	int	column;

	line = 0;
	column = 0;
	(*game)->moves = 0;
	(*game)->collected = false;
	init_player_position(game);
	while ((*game)->map[line])
	{
		while ((*game)->map[line][column])
		{
			if ((*game)->map[line][column] == 'P')
			{
				(*game)->p_pos->y = line;
				(*game)->p_pos->x = column;
				return ;
			}
			column++;
		}
		column = 0;
		line++;
	}
}
