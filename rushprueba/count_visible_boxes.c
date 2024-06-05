/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_visible_boxes.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainigo-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:47:53 by ainigo-l          #+#    #+#             */
/*   Updated: 2024/06/01 18:48:05 by ainigo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int count_visible_boxes(int *line, int size) {
    int count;
    int max_height;
    int i;

    count = 1;
    max_height = line[0];
    i = 1;
    while (i < size) {
        if (line[i] > max_height) {
            count++;
            max_height = line[i];
        }
        i++;
    }
    return count;
}
