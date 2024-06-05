/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_clues.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainigo-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:46:52 by ainigo-l          #+#    #+#             */
/*   Updated: 2024/06/01 18:47:05 by ainigo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define GRID_SIZE 4

int count_visible_boxes(int *line, int size);
void fill_temp_line(int *temp_line, int grid[GRID_SIZE][GRID_SIZE], int i, int col);

int check_clues(int grid[GRID_SIZE][GRID_SIZE], int clues[16]) {
    int temp_line[GRID_SIZE];
    int i;

    i = 0;
    while (i < GRID_SIZE) {
        fill_temp_line(temp_line, grid, i, 0);
        if (count_visible_boxes(temp_line, GRID_SIZE) != clues[i])
            return (0);
        fill_temp_line(temp_line, grid, i, 1);
        if (count_visible_boxes(temp_line, GRID_SIZE) != clues[GRID_SIZE + i])
            return (0);
        i++;
    }
    return check_rows(grid, clues);
}

int check_rows(int grid[GRID_SIZE][GRID_SIZE], int clues[16]) {
    int temp_line[GRID_SIZE];
    int i;

    i = 0;
    while (i < GRID_SIZE) {
        fill_temp_line(temp_line, grid, i, 2);
        if (count_visible_boxes(temp_line, GRID_SIZE) != clues[2 * GRID_SIZE + i])
            return (0);
        fill_temp_line(temp_line, grid, i, 3);
        if (count_visible_boxes(temp_line, GRID_SIZE) != clues[3 * GRID_SIZE + i])
            return (0);
        i++;
    }
    return (1);
}

void fill_temp_line(int *temp_line, int grid[GRID_SIZE][GRID_SIZE], int i, int col) {
    int j;

    j = 0;
    while (j < GRID_SIZE) {
        if (col == 0)
            temp_line[j] = grid[j][i];
        else if (col == 1)
            temp_line[j] = grid[GRID_SIZE - j - 1][i];
        else if (col == 2)
            temp_line[j] = grid[i][j];
        else
            temp_line[j] = grid[i][GRID_SIZE - j - 1];
        j++;
    }
}
