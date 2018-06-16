#!/usr/bin/python3


def island_perimeter(grid):
    """Python function to return the perimeter of an island"""

    p = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                if x + 1 == len(grid) or grid[x + 1][y] == 0:
                    p += 1
                if y + 1 == len(grid[0]) or grid[x][y + 1] == 0:
                    p += 1
                if x - 1 == -1 or grid[x - 1][y] == 0:
                    p += 1
                if y - 1 == -1 or grid[x][y - 1] == 0:
                    p += 1
    return(p)
