#!/usr/bin/python3


def island_perimeter(grid):
    """calculate the perimeter of an island """
    perm = 0
    link = 0

    for y in range(len(grid)):
        for k in range(len(grid[y])):
            if grid[y][k] == 1:
                perm = (prem + 4)

                if y != 0 and grid[y-1][k] == 1:
                    link = (link + 1)
                if k != 0 and grid[y][k-1] == 1:
                    link = (link + 1)

    return perm
