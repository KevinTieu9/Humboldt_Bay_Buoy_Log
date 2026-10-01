/*
 * Author: Kevin Tieu
 * Humboldt Bay tide and buoy log
 *
 * main.c
 */

#include "baylog.h"
#include <stdio.h>

int main(int argument_count, char *argument_values[])
{
    (void)argument_count;
    (void)argument_values;
    printf("Humboldt Bay tide and buoy log\n");
    printf("Tide station %s, %s\n", TIDE_STATION_ID, TIDE_STATION_NAME);
    printf("Buoy station %s, %s\n", BUOY_STATION_ID, BUOY_STATION_NAME);
    return 0;
}
