#!/usr/bin/python3
""" returns island perimeter"""


def island_perimeter(grid):
    """ uses grid to count perimeter of island"""
    result = 0
    len1 = len(grid)
    len2 = len(grid[0])
    x = 0
    while x < len1:
        y = 0
        while y < len2:
            if grid[x][y] == 1:
                if grid[x + 1][y] == 0:
                    result += 1
                if grid[x - 1][y] == 0:
                    result += 1
                if grid[x][y - 1] == 0:
                    result += 1
                if grid[x][y + 1] == 0:
                    result += 1
            y += 1
        x += 1
    return result
