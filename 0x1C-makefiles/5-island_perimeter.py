def island_perimeter(grid):
    """Calculates the perimeter of the island described in the grid.

    Args:
        grid: A 2D list of integers, where 1 represents land
        and 0 represents water.

    Returns:
        The perimeter of the island, as an integer.
    """

    perimeter = 0
    num_rows = len(grid)
    num_cols = len(grid[0])

    for row in range(num_rows):
        for col in range(num_cols):
            if grid[row][col] == 1:
                if row == 0 or grid[row - 1][col] == 0:
                    perimeter += 1
                if row == num_rows - 1 or grid[row + 1][col] == 0:
                    perimeter += 1
                if col == 0 or grid[row][col - 1] == 0:
                    perimeter += 1
                if col == num_cols - 1 or grid[row][col + 1] == 0:
                    perimeter += 1

    return perimeter
