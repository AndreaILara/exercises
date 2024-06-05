/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainigo-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:47:19 by ainigo-l          #+#    #+#             */
/*   Updated: 2024/06/01 18:47:31 by ainigo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define GRID_SIZE 4

void print_grid(int grid[GRID_SIZE][GRID_SIZE]) {
    int i;
    int j;
    char c;

    i = 0;
    while (i < GRID_SIZE) {
        j = 0;
        while (j < GRID_SIZE) {
            c = grid[i][j] + '0';
            write(1, &c, 1);
            if (j < GRID_SIZE - 1)
                write(1, " ", 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
}

int parse_clues(char *str, int clues[16]) {
    int i;

    i = 0;
    while (i < 16) {
        if (str[i * 2] < '1' || str[i * 2] > '4')
            return (0);
        clues[i] = str[i * 2] - '0';
        if (i < 15 && str[i * 2 + 1] != ' ')
            return (0);
        i++;
    }
    return (1);
}
