#!/usr/bin/python3
''' calculate perimeter of an island '''

def num_water_neighbors(grid, i, j):
    ''' Return no. of water neighbors of a cell in a grid '''

    number = 0

    if i <= 0 or not grid[i - 1][j]:
        number += 1
    if j <= 0 or not grid[i][j - 1]:
        number += 1
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        number += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        number += 1

    return num

def island_perimeter(grid):
    ''' return island's perimeter '''

    perimeter = 0
    for p in range(len(grid)):
        for q in range(len(grid[p])):
            if grid[p][q]:
                perimeter += num_water_neighbors(grid, i, j)
    return perimeter
