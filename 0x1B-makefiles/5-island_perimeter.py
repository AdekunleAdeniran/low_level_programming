#!/usr/bin/python3


def island_perimeter(grid):
    """Python function to return the perimeter of an island"""
    l, b = 0, 1
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                if grid[x][y + 1] == 0:
                    l += 1
                elif grid[x][y + 1] == 1:
                    b += 1
    p = 2 * (l + b)
    return(p)
