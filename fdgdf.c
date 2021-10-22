#include<stdio.h>
int main()
{
    void OnKey()
{
	unsigned char c;
	c = getch();
	if (c == 0xe0 || c == 0)//special key
	{
		c = getch();
		switch (c)
		{
		case UP://you want to move man / man move box /
			if (map[2][man_x][man_y - 1] == EMPTY)
			{
				map[2][man_x][man_y - 1] = MAN;//MAN MOVE TO THE UPPER POSITION
				map[2][man_x][man_y] = EMPTY;
				man_y--;
			}
			else if (map[2][man_x][man_y - 1] == BOX)
			{
				if (map[2][man_x][man_y - 2] == EMPTY)
				{
					map[2][man_x][man_y - 1] = MAN;
					map[2][man_x][man_y] = EMPTY;
					map[2][man_x][man_y - 2] = BOX;
					man_y--;
				}
			}
			break;
		case RIGHT://

			if (map[2][man_x + 1][man_y] == EMPTY)
			{
				map[2][man_x + 1][man_y] = MAN;//MAN MOVE TO THE right POSITION
				map[2][man_x][man_y] = EMPTY;
				man_x++;
			}
			else if (map[2][man_x + 1][man_y] == BOX)
			{
				if (map[2][man_x + 2][man_y] == EMPTY)
				{
					map[2][man_x + 1][man_y - 1] = MAN;
					map[2][man_x][man_y] = EMPTY;
					map[2][man_x + 2][man_y] = BOX;
					man_x++;
				}
			}
			break;
        case LEFT:

            if(map[2][man_x-1][man_y] == EMPTY)
            {
                map[2][man_x-1][man_y] = MAN;
                map[2][man_x][man_y] = EMPTY;
                man_x--;
            }
			else if (map[2][man_x - 1][man_y] == BOX)
			{
				if (map[2][man_x - 2][man_y] == EMPTY)
				{
					map[2][man_x - 1][man_y - 1] = MAN;
					map[2][man_x][man_y] = EMPTY;
					map[2][man_x - 2][man_y] = BOX;
					man_x--;
				}
			}
			break;
        case DOWN:
			if (map[2][man_x][man_y +1] == EMPTY)
			{
				map[2][man_x][man_y - 1] = MAN;//MAN MOVE TO THE UPPER POSITION
				map[2][man_x][man_y] = EMPTY;
				man_y--;
			}
			else if (map[2][man_x][man_y - 1] == BOX)
			{
				if (map[2][man_x][man_y - 2] == EMPTY)
				{
					map[2][man_x][man_y - 1] = MAN;
					map[2][man_x][man_y] = EMPTY;
					map[2][man_x][man_y - 2] = BOX;
					man_y--;
				}
			}
			break;









		}
	}
}


    return 0;
}
