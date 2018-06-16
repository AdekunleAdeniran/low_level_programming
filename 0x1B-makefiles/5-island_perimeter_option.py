#!/usr/bin/python3


def island_perimeter(grid):
    """Python Function to print perimeter of an island"""
    perimeter = 0
    for line in grid:
        perimeter += line.count(1) * 4
    for line in grid:
        for i in range(len(line)-1):
            if line[i] == 1 and line[i+1] == 1:
                perimeter -= 2

    for i in range(len(grid)-1):
        for j in range(len(grid[0])):
            if grid[i][j] == 1 and grid[i+1][j] == 1:
                perimeter -= 2

    return perimeter
