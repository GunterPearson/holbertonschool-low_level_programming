#!/usr/bin/python3
""" returns island perimeter"""

def island_perimeter(grid):
    """ uses grid to count perimeter of island"""
    result = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                result += 1
    if result != 0:
        result += 1
    return result * 2
