/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainigo-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:46:11 by ainigo-l          #+#    #+#             */
/*   Updated: 2024/06/01 18:46:17 by ainigo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define GRID_SIZE 4

void print_grid(int grid[GRID_SIZE][GRID_SIZE]);
int  solve(int grid[GRID_SIZE][GRID_SIZE], int clues[16]);
int  parse_clues(char *str, int clues[16]);

int main(int argc, char **argv) {
    int clues[16];
    int grid[GRID_SIZE][GRID_SIZE];
    int i;
    int j;

    if (argc != 2) {
        write(1, "Error\n", 6);
        return (1);
    }
    if (!parse_clues(argv[1], clues)) {
        write(1, "Error\n", 6);
        return (1);
    }
    i = 0;
    while (i < GRID_SIZE) {
        j = 0;
        while (j < GRID_SIZE) {
            grid[i][j] = 0;
            j++;
        }
        i++;
    }
    if (solve(grid, clues)) {
        print_grid(grid);
    } else {
        write(1, "Error\n", 6);
    }
    return (0);
}
