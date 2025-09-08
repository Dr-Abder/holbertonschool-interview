#include <stdlib.h>
#include <stdio.h>
#include "sandpiles.h"


/**
* sandpiles_sum - Print la somme de deux tableaux avec des conditions
* @grid1: 3x3 grid
* @grid2: 3x3 grid
*
*/
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
int i, x;
for (i = 0; i < 3; i++)
{
for (x = 0; x < 3; x++)
{
grid1[i][x] += grid2[i][x];
}
}
/**
* topple - faire un topple si grid1 n'est pas stable
*/
while (!is_stable(grid1))
{
printf("=\n");
print_grid(grid1);
topple(grid1);
}
}

/**
 * print_grid - Prints a 3x3 grid
 * @grid: 3x3 grid à print
 */
static void print_grid(int grid[3][3])
{
int i, j;
for (i = 0; i < 3; i++)
{
for (j = 0; j < 3; j++)
{
if (j)
printf(" ");
printf("%d", grid[i][j]);
}
printf("\n");
}
}

/**
 * is_stable - Vérifier si grid est stable
 * stable = grid[i][x] < 3
 * Return: si c'est stable 1 sinon 0
 * @grid: 3x3 grid à vérifier
 */
int is_stable(int grid[3][3])
{
int i, x;

for (i = 0; i < 3; i++)
{
for (x = 0; x < 3; x++)
{
if (grid[i][x] > 3)
{
return (0);
}
}
}
return (1);
}

/**
* topple - faire un topple si grid1 n'est pas stable
* si n'est pas stable faire -4 et attribuer +1 à ces voisins direct
* @grid: 3x3 grid à stabiliser
*/
void topple(int grid[3][3])
{
int temp[3][3] = {0};
int i, x;

for (i = 0; i < 3; i++)
{
for (x = 0; x < 3; x++)
{
if (grid[i][x] >= 4)
{
grid[i][x] -= 4;

if (i > 0)
{
temp[i - 1][x] += 1;
}

if (i < 2)
{
temp[i + 1][x] += 1;
}

if (x > 0)
{
temp[i][x - 1] += 1;
}

if (x < 2)
{
temp[i][x + 1] += 1;
}
}
}
}
for (i = 0; i < 3; i++)
{
for (x = 0; x < 3; x++)
{
grid[i][x] += temp[i][x];
}
}
}
