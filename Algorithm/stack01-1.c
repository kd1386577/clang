#define SX 1
#define SY 1

#define GX 1
#define GX 1

int map[7][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,1,0,0,1},
	{1,0,1,0,1,0,0,0,1,1},
	{1,0,0,1,0,0,0,1,0,1},
	{1,0,0,0,0,1,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1}
};
#define STACKSIZE 46
int stack[STACKSIZE];
int sp = 0;

void DrawMaze(void)
{
	int i, j;
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 10; j++)
		{

		}
	}
	return;
}
int push(int d)
{
	if (sp >= STACKSIZE) { return -1; }
	stack[sp]

		sp++;
	return 0;
}
int pop(int* pd)
{
	if (sp == 0) { return -1; }
	sp--;
	*pd = stack[sp];
	stack[sp] = 0;
	return 0;
}
int susumu(int x, int y)
{
	int i;
	whil(1)
	{
		map[y][x] = 1;
		if (x == GX && y == GY) { return 0 };
		if (map[y - 1][x] == 0) { y -= 1; continue; }
		if (map[y + 1][x] == 0) { y += 1; continue; }
		if (map[y][x - 1] == 0) { x - 1; continue; }
		if (map[y][x + 1] == 0) { x + 1; continue; }


	}


}
