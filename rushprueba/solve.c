/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainigo-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:46:26 by ainigo-l          #+#    #+#             */
/*   Updated: 2024/06/01 18:46:41 by ainigo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define GRID_SIZE 4

int is_valid(int grid[GRID_SIZE][GRID_SIZE], int row, int col, int num);
int check_clues(int grid[GRID_SIZE][GRID_SIZE], int clues[16]);

int solve(int grid[GRID_SIZE][GRID_SIZE], int clues[16]) {
    int row;
    int col;
    int num;

    row = 0;
    while (row < GRID_SIZE) {
        col = 0;
        while (col < GRID_SIZE) {
            if (grid[row][col] == 0) {
                num = 1;
                while (num <= GRID_SIZE) {
                    if (is_valid(grid, row, col, num)) {
                        grid[row][col] = num;
                        if (solve(grid, clues))
                            return (1);
                        grid[row][col] = 0;
                    }
                    num++;
                }
                return (0);
            }
            col++;
        }
        row++;
    }
    return check_clues(grid, clues);
}

int is_valid(int grid[GRID_SIZE][GRID_SIZE], int row, int col, int num) {
    int x;

    x = 0;
    while (x < GRID_SIZE) {
        if (grid[row][x] == num || grid[x][col] == num)
            return (0);
        x++;
    }
    return (1);
}
