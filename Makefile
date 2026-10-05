# Author: Kevin Tieu
# Humboldt Bay tide and buoy log
# Build in the VS Code terminal on the host.
CC = gcc
CFLAGS = -std=c11
OBJS = main.o tide_store.o buoy_store.o time_util.o query.o
TARGET = Tieu_K_baylog

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c baylog.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET) tides.bin buoy.bin

.PHONY: all clean