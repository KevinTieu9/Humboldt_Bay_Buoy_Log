#ifndef BAYLOG_H
#define BAYLOG_H

/*
 * Author: Kevin Tieu
 * Humboldt Bay tide and buoy log
 */

#include <stdint.h>
#include <stdio.h>

#define TIDE_STATION_ID "9418767"
#define TIDE_STATION_NAME "North Spit, Humboldt Bay"
#define BUOY_STATION_ID "46022"
#define BUOY_STATION_NAME "Eel River, 17 nm WSW of Eureka"

int tide_store_is_ready(void);
int buoy_store_is_ready(void);
int time_util_is_ready(void);
int query_is_ready(void);

#endif
