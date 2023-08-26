#!/usr/bin/python3
##defines an island perimeter of the measuring function we have.

def island_perimeter(grid):
    
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
    return size * 4 - edges * 2