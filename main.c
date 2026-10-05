/*
 * Author: Kevin Tieu
 * Humboldt Bay tide and buoy log
 *
 * main.c
 */

#include "baylog.h"
#include <stdio.h>
#include <unistd.h>

int main(int argument_count, char *argument_values[])
{
    int option_letter;
    while ((option_letter = getopt(argument_count, argument_values, "h")) != -1) {
        switch (option_letter) {
        case 'h':
            printf("Usage: %s [-h]\n", argument_values[0]);
            return 0;
        default:
            return 1;
        }
    }
    printf("Humboldt Bay tide and buoy log\n");
    return 0;
}